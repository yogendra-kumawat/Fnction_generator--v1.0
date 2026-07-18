# 🟤 Function Generator v1.0 — PCB

## Board Specs

| Property | Value |
|---|---|
| Substrate | Single-sided FR2 copper-clad |
| Fabrication | Toner-transfer chemical etch|
| Copper layer | 1 (bottom) |
| Board size | ~100 × 55 mm (approximate) |
| Holes | ~80+ — drilled by hand |
| Finish | Bare copper (no HASL / ENIG) |

<br>

---

## Toner Transfer Etch Process

```
1. Print copper layer (mirrored) 

2. Cut copper-clad board to size(45x90 mm), clean surface with fine sandpaper + acetone

3. Place paper face-down on copper, press firmly with clothes iron
   Temperature : ~180 °C
   Duration    : 5–7 minutes, firm even pressure, no sliding

4. Soak board in warm water for 2–3 minutes, peel paper slowly
   Toner remains bonded to copper as etch resist

5. Inspect under light — touch up any broken traces with a permanent marker

<img width="1200" height="1600" alt="WhatsApp Image 2026-07-17 at 7 32 57 PM" src="https://github.com/user-attachments/assets/5c30cbe3-6242-4ca9-9831-ac7e69580e40" />

6. Submerge in FeCl₃ (ferric chloride) solution
   Time : 15–30 min depending on solution temperature
   stair the solution for fast etching

<img width="400" height="225" alt="WhatsApp Video 2026-07-18 at 9 00 03 AM" src="https://github.com/user-attachments/assets/329aff01-548d-4e3b-8311-94e956f8257c" />


7. Remove when all unprotected copper is dissolved — only traces remain

8. Rinse thoroughly, strip toner with acetone

<img width="1600" height="1204" alt="WhatsApp Image 2026-07-17 at 7 25 27 PM" src="https://github.com/user-attachments/assets/3b9bcfbc-2526-41c3-b695-f538d3b912ef" />

9. Dry, inspect continuity with multimeter
```

> **Tip:** Warm FeCl₃ (~40 °C) etches 2× faster and gives cleaner trace edges. A plastic container on a hot plate works fine.

<br>

---

## DIY Drill Rig

No PCB drill press — so one was built.

```
┌─────────────────────────┐
│   Servo Tester Module   │  ← Speed control via PWM knob
│   (blue box, blue LED)  │
└────────────┬────────────┘
             │ PWM signal
             ▼
   Brushless RC Motor
   (gold can, ~12 V)
             │
   Press-fit into PVC pipe  ← Acts as handle + rigidity
             │
   Keyless Mini Drill Chuck
             │
    0.8 mm Carbide Drill Bit
```

<img width="1200" height="1600" alt="WhatsApp Image 2026-07-17 at 7 33 01 PM" src="https://github.com/user-attachments/assets/dc43e74f-8049-45c5-b62d-ec2755d81ce8" />



<br>

---


## What's On the Board

### Power Section
- ams1117-adj — adjustable output regulator
- ams1117-5.0 — fixed 5 V
- AMS1117-3.3 — fixed 3.3 V
- Li-Ion charging IC (TP4056-style)
- DC barrel jack for external input

### Signal Section
- ADC input pin headers (2 channels, dual-simultaneous)
- 10 Ω on input limits current on accidental short — protects regulators from latch-up

### User Interface
- 4× tactile switches (6×6 mm)
- 2× trimmer potentiometers (10 kΩ)
- 1× green LED (power indicator)

### Connectors
- I²C header (GND / VCC / SCL / SDA) — for SSD1306 OLED
- extra I²C port for future use
- STM32 Blue Pill debugging wires via male pin headers
<br>

<img width="1200" height="1600" alt="WhatsApp Image 2026-07-17 at 7 32 57 PM (2)" src="https://github.com/user-attachments/assets/bfe6c3fa-7b08-48e9-a1b2-b11f86e060f0" />
<img width="1600" height="1204" alt="WhatsApp Image 2026-07-17 at 7 25 34 PM" src="https://github.com/user-attachments/assets/7a10e065-fcbc-4eab-92a7-5fd67050563a" />
<img width="1600" height="1204" alt="WhatsApp Image 2026-07-17 at 7 25 36 PM" src="https://github.com/user-attachments/assets/691ad01c-ff19-4ca1-a4e9-4f2a340b9602" />



---
