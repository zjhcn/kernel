interface KernelNApi {
    getCurrentProcessId(): Promise<number>;
    setKeyboardDelay(ms: number): Promise<number>;
    keyTap(key: string, modifier?: string | string[]): Promise<number>;
    keyToggle(key: string, down: string, modifier?: string | string[]): Promise<number>;
    unicodeTap(value: number): Promise<number>;
    typeString(string: string): Promise<number>;
    typeStringDelayed(string: string, cpm: number): Promise<number>;
}
export declare const kernel: KernelNApi;
export declare const keys: {
    key: {
        a: string;
        b: string;
        c: string;
        d: string;
        e: string;
        f: string;
        g: string;
        h: string;
        i: string;
        j: string;
        k: string;
        l: string;
        m: string;
        n: string;
        o: string;
        p: string;
        q: string;
        r: string;
        s: string;
        t: string;
        u: string;
        v: string;
        w: string;
        x: string;
        y: string;
        z: string;
        "0": string;
        "1": string;
        "2": string;
        "3": string;
        "4": string;
        "5": string;
        "6": string;
        "7": string;
        "8": string;
        "9": string;
        backspace: string;
        delete: string;
        enter: string;
        tab: string;
        escape: string;
        up: string;
        down: string;
        right: string;
        left: string;
        home: string;
        end: string;
        pageup: string;
        pagedown: string;
        f1: string;
        f2: string;
        f3: string;
        f4: string;
        f5: string;
        f6: string;
        f7: string;
        f8: string;
        f9: string;
        f10: string;
        f11: string;
        f12: string;
        command: string;
        alt: string;
        control: string;
        shift: string;
        right_shift: string;
        space: string;
        printscreen: string;
        insert: string;
        audio_mute: string;
        audio_vol_down: string;
        audio_vol_up: string;
        audio_play: string;
        audio_stop: string;
        audio_pause: string;
        audio_prev: string;
        audio_next: string;
        audio_rewind: string;
        audio_forward: string;
        audio_repeat: string;
        audio_random: string;
        numpad_0: string;
        numpad_1: string;
        numpad_2: string;
        numpad_3: string;
        numpad_4: string;
        numpad_5: string;
        numpad_6: string;
        numpad_7: string;
        numpad_8: string;
        numpad_9: string;
    };
    modifier: {
        alt: string;
        command: string;
        win: string;
        control: string;
        shift: string;
    };
};
export {};
