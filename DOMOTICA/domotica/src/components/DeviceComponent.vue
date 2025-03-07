<script setup lang="ts">
import {Device} from '@/models/devices';

const props = defineProps({
    device: { type: Device, required: true }
});



</script>


<template>
    <section :class="`device-${props.device.state}`">
        <h5>{{props.device.name }}</h5>
        <button class="device-buttons on-button mr-1">ON</button>
        <button class="device-buttons off-button">OFF</button>
    </section>


</template>


<style scoped lang="scss">

.device-buttons{
    border: none;
    padding: 0.6rem;
    border-radius: 0.2rem 0rem;
    cursor: pointer;
    &:hover{
        opacity: 0.10;
        transform: scale(1.25);
        transition: 0.5;
    }
}

.device-true{
    .on-button{
        background-color: green;
    }
    .off-button{
        background-color: white;
    }
    
}

.device-false{
    .on-button{
        background-color: white;
    }
    .off-button{
        background-color: red;
    }
}


</style>