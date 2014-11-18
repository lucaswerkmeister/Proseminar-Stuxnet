Gliederung
==========

WIP an erstem grobem Entwurf.

0. Begrüßung etc
1. Einführung
   - Zielanlagen
   - Step 7
   - PLCs
   - etc
   - “Hier muss Stuxnet rein”
2. Verbreitung
   1. Infektion
      - removable drives
        - LNK (29-30) – 1.10x only
        - Autorun.inf (30-32) – 1.001 only
        - Step7 projects – s. u.
      - network
        - WinCC (26-27)
        - Print Spooler (27-28)
        - SMB (28)
      - Step7 projects
        - S7P files (33-34)
        - MCP files (34) ?
        - Which files?
          - 0.5 infects files on inserted removable drives
          - All versions infect opened files
          - But files are always checked for “suitable”
   2. Updates
      - network
        - peer-to-peer (25-26)
        - Mailslots (0.5 5) – 0.5 only
        - File shares (0.5 5) – 0.5 only
      - Step7 projects
        - S7P files (33-34)
        - MCP files (34)
        - TMP files (34-35)
3. Tarnung
   - Windows rootkit (24)
   - PLC rootkit (48)
4. Sabotage
   - vielleicht sollte hier die PLC erklärung hin? wie viel brauchen wir überhaupt?
   - infection checks (39)
     - contain the actual attack to the target even though the threat spread globally
   - sequence A/B (41-45) – 1.x only
     - attempts to sabotage centrifuges by modifying frequencies
     - state machine:
       1. collect data
       2. sleep for 2 hours
       3. send sub-sequence a
       4. send sub-sequence b
       5. reset, goto 1
     - alternates between two sequences to send in states 3+4:
       1. set max frequency to 1410 Hz
       2. set max frequency to 2 Hz, then to 1064 Hz
     - during states 3+4, replay data from state 1? only stated for Stuxnet 0.5 (sequence C, 9), but would also make sense here
   - sequence C (45-48, 0.5 5-12) – deactivated and incomplete in 1.x
     - attempts to sabotage centrifuges by achieving damaging pressures by modifying valves
     - state machine:
       1. collect data
       2. start replaying fake data, close most valves
       3. open some valves
       4. wait
       5. open almost all valves, wait a bit
       6. wait (block changes)
       7. reset (to 0)
