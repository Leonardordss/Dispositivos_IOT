<script setup lang="ts">
import {Device} from '@/models/devices';

const props = defineProps({
    device: { type: Device, required: true }
});

const changeDevice = (newState: boolean)=> {
    props.device.state = newState;
}



</script>


<template>
    <section
    :class="`flex flex-column text-center align-items-center justify-content-center device-${props.device.state}`">
        <h5>{{props.device.name }}</h5>
        <span class=" icons material-icons-round">{{ props.device.icon }}</span>

        <div class="flex flex-row">
            <button class="device-buttons on-button mr-1" @click="changeDevice(true)">ON</button>
            <button class="device-buttons off-button" @click="changeDevice(false)">OFF</button>
        </div>
        
    </section>


</template>


<style scoped lang="scss">

section{
    
    border: 0.5px solid black;
    background-color: #00FF7F;
    width: 10rem;
    height: 6rem;
    margin: 0.5rem;
  
    .icons{
        width: 2rem;
        margin: 0.5rem;
    }
}

.device-buttons{
    border: none;
    padding: 0.6rem;
    border-radius: 0.2rem 0rem;
    cursor: pointer;
    &:hover{
        opacity: 0.6;
        transform: scale(1.05);
        transition: 0.5s;
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