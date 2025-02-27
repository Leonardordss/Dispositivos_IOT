<script setup lang="ts">

import {Environment} from '@/models/devices';
import {reactive, ref} from 'vue';

const environments = reactive(Array<Environment>);


const sala: Environment = reactive({
    name: 'Sala de Estar',
    devices: [
        {
            name:'Ar condicionado',
            state: false,
            color: '#3266a8'
        },
        {
            name:'Smart TV',
            state: true,
            color: '#a5c949'
        },
        {
            name:'Iluminação',
            state: false,
            color: '#4d0d75'
        },
    ]
})

</script>

<template>
    <h1>Devices page!!!!</h1>
    {{ sala }}
    
</template>

<style scoped lang="scss">

</style>