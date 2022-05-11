# itSynth Install

1. Download JUCE & Projucer (enkelt download fra "https://juce.com/get-juce/download")

2. Vælg mappe for JUCE & Projucer

3. Åbn Projucer appen efter install

4. Vælg mappe for Juce projects & Path to modules (Modules ligger under JUCE folderen)

5.Download repository

6. Kopier filer til Juce Projects mappe

7. Åbn itSynth i projucer (åbn itSynth.jucer)

8. Tilføj exporter fra projucer appen (fx visual studio code / 2019)

9. Save and open in IDE (klik ikonet ved siden af selected exporter)

10. vælg release + 64x og kør buildet som standalone

11. åbn mappen hvor dit projekt ligger på der burde nu være en "builds" mappe

13. under builds finder du en release mappe hvor der standalone plugin er blevet bygget



(Medmindre du har en midiport og et klaver kan du ikke spille instrumentet fra dette vindue, nedestående er guide til hvordan du afprøver programmet uden at eje et midikeyboard)
_______________________________________________________________________________________________________________________________________________________________________

DEL 1:

1. Gå til C:\JUCE\extras\AudioPluginHost

2. åbn .jucer filen 

3. debug / release et build

4. find derefter buildet i D:\Skole\JUCE\extras\AudioPluginHost\Builds\VisualStudio2019\x64\release eller debug\App\AudioPluginHost

5. åbn programmet

DEL 2:

1. åbn itSynth.projucer filen under projectfiles

2. åbn koden tilsvarende til projektet i visual studio 2019 og vælg build itSynth_VST3 filen (billede viser hvordan) ![image](https://user-images.githubusercontent.com/58981992/167800038-2fbee5d9-c11c-4ffe-9660-38907cae0535.png)

3. Find .VST3 filen under C:\JUCE - Projects\ItSynth\Builds\VisualStudio2019\x64\Release\VST3

3. Kopier "type" VST3-fil til C:\Program Files\Common Files\VST3

Del 3:

1. Nu hvor vi har exporteret en VST3 type fil til C:\Program Files\Common Files\VST3 kan vi åbne D:\Skole\JUCE\extras\AudioPluginHost\Builds\VisualStudio2019\x64\release eller debug\App\AudioPluginHost

2. I AudioPluginHost tryk ctrl + p -> options -> Scan for new or updated vst3 plugins

3. vælg plugins -> Create a plugin -> your company -> IT synth

4. Konfigurer sådan ![image](https://user-images.githubusercontent.com/58981992/167801343-5ea82e79-fac3-47f8-be2a-1c7cdc4950a4.png)

5. Du burde nu kunne spille lyde på dit keyboard, for at konfiguere synthen skal du dobbelt klikke på ikonet ItSynth (VST3)

_______________________________________________________________________________________________________________________________________________________________________
