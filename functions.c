// Rewrite this function for printf usage
int _write(int file, char *ptr, int len) {
    HAL_UART_Transmit(&huart2, (uint8_t *) ptr, len, 100);
    return len;
}
