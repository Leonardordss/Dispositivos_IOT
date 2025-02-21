
export type Device = {
    nome: string,
    state: boolean,

}

export type Places ={
    nome: string,
    devices: Array<Device>
}

testeType: Places ={
    nome: "Cozinha",
    devices: {}
}