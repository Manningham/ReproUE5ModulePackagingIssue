Simple project to reproduce an issue working with custom modules in UE5.

There is one custom module (/Source/Foo). The project compiles and runs in PIE without issue, but when packaged the Foo module is not found.

![Error Message](error-message.png "Error Message")

We can see from the logs that the Foo sources are found and compiled, so it's not clear why this is happening.

EmptyUE5Project.log after building (Platform > Windows > Package Project (Development)):

```
Log file open, 04/17/22 17:09:04
LogWindows: Failed to load 'aqProf.dll' (GetLastError=126)
LogWindows: File 'aqProf.dll' does not exist
LogProfilingDebugging: Loading WinPixEventRuntime.dll for PIX profiling (from ../../../Engine/Binaries/ThirdParty/Windows/WinPixEventRuntime/x64).
LogWindows: Failed to load 'VtuneApi.dll' (GetLastError=126)
LogWindows: File 'VtuneApi.dll' does not exist
LogWindows: Failed to load 'VtuneApi32e.dll' (GetLastError=126)
LogWindows: File 'VtuneApi32e.dll' does not exist
LogWindows: Started CrashReportClient (pid=44552)
LogConsoleResponse: Display: Failed to find resolution value strings in scalability ini. Falling back to default.
LogConsoleResponse: Display: Failed to find resolution value strings in scalability ini. Falling back to default.
LogInit: Display: Running engine for game: EmptyUE5Project
LogCore: UnrealTraceServer: Trace store launch successful
LogCsvProfiler: Display: Metadata set : platform="Windows"
LogCsvProfiler: Display: Metadata set : config="Development"
LogCsvProfiler: Display: Metadata set : buildversion="++UE5+Release-5.0-CL-19505902"
LogCsvProfiler: Display: Metadata set : engineversion="5.0.0-19505902+++UE5+Release-5.0"
LogCsvProfiler: Display: Metadata set : commandline="" "C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject"""
LogCsvProfiler: Display: Metadata set : os="Windows 10 (21H2) "
LogCsvProfiler: Display: Metadata set : cpu="AuthenticAMD|AMD Ryzen 9 5900X 12-Core Processor"
LogCsvProfiler: Display: Metadata set : pgoenabled="0"
LogCsvProfiler: Display: Metadata set : loginid="c77ccc4b4162244dac67c8bf462e6de3"
LogCsvProfiler: Display: Metadata set : llm="0"
LogPlatformFile: Not using cached read wrapper
LogStats: Stats thread started at 0.221894
LogICUInternationalization: ICU TimeZone Detection - Raw Offset: +9:00, Platform Override: ''
LogInit: Session CrashGUID >====================================================
         Session CrashGUID >   UECC-Windows-163895A14442E62CEE1BDCBBA4277A2B
         Session CrashGUID >====================================================
LogConfig: Display: Loading VulkanPC ini files took 0.03 seconds
LogConfig: Display: Loading IOS ini files took 0.03 seconds
LogConfig: Display: Loading HoloLens ini files took 0.03 seconds
LogConfig: Display: Loading Mac ini files took 0.03 seconds
LogConfig: Display: Loading Android ini files took 0.03 seconds
LogConfig: Display: Loading TVOS ini files took 0.04 seconds
LogConfig: Display: Loading Unix ini files took 0.04 seconds
LogConfig: Display: Loading Windows ini files took 0.04 seconds
LogPluginManager: Mounting Engine plugin Bridge
LogPluginManager: Mounting Engine plugin MeshPainting
LogConfig: Display: Loading LinuxArm64 ini files took 0.04 seconds
LogConfig: Display: Loading Linux ini files took 0.04 seconds
LogPluginManager: Mounting Engine plugin FastBuildController
LogPluginManager: Mounting Engine plugin XGEController
LogPluginManager: Mounting Engine plugin EnvironmentQueryEditor
LogPluginManager: Mounting Engine plugin AISupport
LogPluginManager: Mounting Engine plugin OodleNetwork
LogPluginManager: Mounting Engine plugin AnimationModifierLibrary
LogPluginManager: Mounting Engine plugin GameplayCameras
LogPluginManager: Mounting Engine plugin AssetManagerEditor
LogPluginManager: Mounting Engine plugin DatasmithContent
LogPluginManager: Mounting Engine plugin CameraShakePreviewer
LogPluginManager: Mounting Engine plugin DataValidation
LogPluginManager: Mounting Engine plugin CryptoKeys
LogPluginManager: Mounting Engine plugin GameplayTagsEditor
LogPluginManager: Mounting Engine plugin GeometryMode
LogPluginManager: Mounting Engine plugin MacGraphicsSwitching
LogPluginManager: Mounting Engine plugin MobileLauncherProfileWizard
LogPluginManager: Mounting Engine plugin PluginBrowser
LogPluginManager: Mounting Engine plugin SequencerAnimTools
LogPluginManager: Mounting Engine plugin WorldPartitionHLODUtilities
LogPluginManager: Mounting Engine plugin CurveEditorTools
LogPluginManager: Mounting Engine plugin EditorDebugTools
LogPluginManager: Mounting Engine plugin FacialAnimation
LogPluginManager: Mounting Engine plugin MaterialAnalyzer
LogPluginManager: Mounting Engine plugin Niagara
LogPluginManager: Mounting Engine plugin AnimationSharing
LogPluginManager: Mounting Engine plugin StylusInput
LogPluginManager: Mounting Engine plugin SpeedTreeImporter
LogPluginManager: Mounting Engine plugin Paper2D
LogPluginManager: Mounting Engine plugin VariantManagerContent
LogPluginManager: Mounting Engine plugin EditorScriptingUtilities
LogPluginManager: Mounting Engine plugin CodeLiteSourceCodeAccess
LogPluginManager: Mounting Engine plugin GitSourceControl
LogPluginManager: Mounting Engine plugin AutomationUtils
LogPluginManager: Mounting Engine plugin KDevelopSourceCodeAccess
LogPluginManager: Mounting Engine plugin BackChannel
LogPluginManager: Mounting Engine plugin PlasticSourceControl
LogPluginManager: Mounting Engine plugin PerforceSourceControl
LogPluginManager: Mounting Engine plugin PixWinPlugin
LogPluginManager: Mounting Engine plugin PluginUtils
LogPluginManager: Mounting Engine plugin PropertyAccessNode
LogPluginManager: Mounting Engine plugin ModelingToolsEditorMode
LogPluginManager: Mounting Engine plugin NullSourceCodeAccess
LogPluginManager: Mounting Engine plugin RiderSourceCodeAccess
LogPluginManager: Mounting Engine plugin SubversionSourceControl
LogPluginManager: Mounting Engine plugin ChaosCloth
LogPluginManager: Mounting Engine plugin UObjectPlugin
LogPluginManager: Mounting Engine plugin ChaosClothEditor
LogPluginManager: Mounting Engine plugin ChaosEditor
LogPluginManager: Mounting Engine plugin ChaosNiagara
LogPluginManager: Mounting Engine plugin ChaosSolverPlugin
LogPluginManager: Mounting Engine plugin CharacterAI
LogPluginManager: Mounting Engine plugin TraceDataFilters
LogPluginManager: Mounting Engine plugin VisualStudioCodeSourceCodeAccess
LogPluginManager: Mounting Engine plugin VisualStudioSourceCodeAccess
LogPluginManager: Mounting Engine plugin TextureFormatOodle
LogPluginManager: Mounting Engine plugin XCodeSourceCodeAccess
LogPluginManager: Mounting Engine plugin AndroidMedia
LogPluginManager: Mounting Engine plugin AvfMedia
LogPluginManager: Mounting Engine plugin CLionSourceCodeAccess
LogPluginManager: Mounting Engine plugin FullBodyIK
LogPluginManager: Mounting Engine plugin AlembicImporter
LogPluginManager: Mounting Engine plugin ImgMedia
LogPluginManager: Mounting Engine plugin MediaCompositing
LogPluginManager: Mounting Engine plugin MediaPlayerEditor
LogPluginManager: Mounting Engine plugin WebMMedia
LogPluginManager: Mounting Engine plugin WmfMedia
LogPluginManager: Mounting Engine plugin ActorSequence
LogPluginManager: Mounting Engine plugin MatineeToLevelSequence
LogPluginManager: Mounting Engine plugin SequencerScripting
LogPluginManager: Mounting Engine plugin GeometryCollectionPlugin
LogPluginManager: Mounting Engine plugin TemplateSequence
LogPluginManager: Mounting Engine plugin GeometryFlow
LogPluginManager: Mounting Engine plugin OnlineBase
LogPluginManager: Mounting Engine plugin OnlineSubsystem
LogPluginManager: Mounting Engine plugin UdpMessaging
LogPluginManager: Mounting Engine plugin LevelSequenceEditor
LogPluginManager: Mounting Engine plugin TcpMessaging
LogPluginManager: Mounting Engine plugin OnlineSubsystemNull
LogPluginManager: Mounting Engine plugin OnlineSubsystemUtils
LogPluginManager: Mounting Engine plugin MeshLODToolset
LogPluginManager: Mounting Engine plugin OpenImageDenoise
LogPluginManager: Mounting Engine plugin MeshModelingToolsetExp
LogPluginManager: Mounting Engine plugin PlatformCrypto
LogPluginManager: Mounting Engine plugin ProxyLODPlugin
LogPluginManager: Mounting Engine plugin PythonScriptPlugin
LogPluginManager: Mounting Engine plugin LauncherChunkInstaller
LogPluginManager: Mounting Engine plugin SkeletalReduction
LogPluginManager: Mounting Engine plugin BlendSpaceMotionAnalysis
LogPluginManager: Mounting Engine plugin ControlRig
LogPluginManager: Mounting Engine plugin ControlRigSpline
LogPluginManager: Mounting Engine plugin PlanarCut
LogPluginManager: Mounting Engine plugin IKRig
LogPluginManager: Mounting Engine plugin AndroidDeviceProfileSelector
LogPluginManager: Mounting Engine plugin AndroidPermission
LogPluginManager: Mounting Engine plugin AppleMoviePlayer
LogPluginManager: Mounting Engine plugin AppleImageUtils
LogPluginManager: Mounting Engine plugin AndroidFileServer
LogPluginManager: Mounting Engine plugin AndroidMoviePlayer
LogPluginManager: Mounting Engine plugin AssetTags
LogPluginManager: Mounting Engine plugin AudioCapture
LogPluginManager: Mounting Engine plugin ArchVisCharacter
LogPluginManager: Mounting Engine plugin AudioSynesthesia
LogPluginManager: Mounting Engine plugin ChunkDownloader
LogPluginManager: Mounting Engine plugin CustomMeshComponent
LogPluginManager: Mounting Engine plugin CableComponent
LogPluginManager: Mounting Engine plugin GeometryCache
LogPluginManager: Mounting Engine plugin GeometryProcessing
LogPluginManager: Mounting Engine plugin GooglePAD
LogPluginManager: Mounting Engine plugin GoogleCloudMessaging
LogPluginManager: Mounting Engine plugin IOSDeviceProfileSelector
LogPluginManager: Mounting Engine plugin HairStrands
LogPluginManager: Mounting Engine plugin LinuxDeviceProfileSelector
LogPluginManager: Mounting Engine plugin MeshModelingToolset
LogPluginManager: Mounting Engine plugin MobilePatchingUtils
LogPluginManager: Mounting Engine plugin ProceduralMeshComponent
LogPluginManager: Mounting Engine plugin RuntimePhysXCooking
LogPluginManager: Mounting Engine plugin PropertyAccessEditor
LogPluginManager: Mounting Engine plugin ResonanceAudio
LogPluginManager: Mounting Engine plugin LocationServicesBPLibrary
LogPluginManager: Mounting Engine plugin SoundFields
LogPluginManager: Mounting Engine plugin SignificanceManager
LogPluginManager: Mounting Engine plugin Synthesis
LogPluginManager: Mounting Engine plugin WebMMoviePlayer
LogPluginManager: Mounting Engine plugin WindowsDeviceProfileSelector
LogPluginManager: Mounting Engine plugin WindowsMoviePlayer
LogPluginManager: Mounting Engine plugin ExampleDeviceProfileSelector
LogPluginManager: Mounting Engine plugin ActorLayerUtilities
LogPluginManager: Mounting Engine plugin ContentBrowserFileDataSource
LogPluginManager: Mounting Engine plugin ContentBrowserClassDataSource
LogPluginManager: Mounting Engine plugin ContentBrowserAssetDataSource
LogPluginManager: Mounting Engine plugin OnlineSubsystemGooglePlay
LogPluginManager: Mounting Engine plugin OnlineServices
LogPluginManager: Mounting Engine plugin OnlineSubsystemIOS
LogPluginManager: Mounting Engine plugin InterchangeEditor
LogPluginManager: Mounting Engine plugin Interchange
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Bridge/Content/' mounted to '/Bridge/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Enterprise/DatasmithContent/Content/' mounted to '/DatasmithContent/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Editor/GeometryMode/Content/' mounted to '/GeometryMode/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/FX/Niagara/Content/' mounted to '/Niagara/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Developer/AnimationSharing/Content/' mounted to '/AnimationSharing/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Editor/SpeedTreeImporter/Content/' mounted to '/SpeedTreeImporter/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/2D/Paper2D/Content/' mounted to '/Paper2D/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Editor/ModelingToolsEditorMode/Content/' mounted to '/ModelingToolsEditorMode/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/ChaosClothEditor/Content/' mounted to '/ChaosClothEditor/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/ChaosNiagara/Content/' mounted to '/ChaosNiagara/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/ChaosSolverPlugin/Content/' mounted to '/ChaosSolverPlugin/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/FullBodyIK/Content/' mounted to '/FullBodyIK/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Media/MediaCompositing/Content/' mounted to '/MediaCompositing/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/MovieScene/SequencerScripting/Content/' mounted to '/SequencerScripting/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/GeometryCollectionPlugin/Content/' mounted to '/GeometryCollectionPlugin/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/GeometryFlow/Content/' mounted to '/GeometryFlow/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/MeshLODToolset/Content/' mounted to '/MeshLODToolset/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/MeshModelingToolsetExp/Content/' mounted to '/MeshModelingToolsetExp/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/PythonScriptPlugin/Content/' mounted to '/PythonScriptPlugin/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Animation/ControlRig/Content/' mounted to '/ControlRig/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Animation/ControlRigSpline/Content/' mounted to '/ControlRigSpline/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Animation/IKRig/Content/' mounted to '/IKRig/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/AudioSynesthesia/Content/' mounted to '/AudioSynesthesia/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/GeometryProcessing/Content/' mounted to '/GeometryProcessing/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/HairStrands/Content/' mounted to '/HairStrands/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/MeshModelingToolset/Content/' mounted to '/MeshModelingToolset/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/ResonanceAudio/Content/' mounted to '/ResonanceAudio/'
LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/Synthesis/Content/' mounted to '/Synthesis/'
SourceControl: Source control is disabled
SourceControl: Source control is disabled
PixWinPlugin: PIX capture plugin failed to initialize! Check that the process is launched from PIX.
LogInit: Using libcurl 7.55.1-DEV
LogInit:  - built for x86_64-pc-win32
LogInit:  - supports SSL with OpenSSL/1.1.1
LogInit:  - supports HTTP deflate (compression) using libz 1.2.8
LogInit:  - other features:
LogInit:      CURL_VERSION_SSL
LogInit:      CURL_VERSION_LIBZ
LogInit:      CURL_VERSION_IPV6
LogInit:      CURL_VERSION_ASYNCHDNS
LogInit:      CURL_VERSION_LARGEFILE
LogInit:      CURL_VERSION_IDN
LogInit:  CurlRequestOptions (configurable via config and command line):
LogInit:  - bVerifyPeer = true  - Libcurl will verify peer certificate
LogInit:  - bUseHttpProxy = false  - Libcurl will NOT use HTTP proxy
LogInit:  - bDontReuseConnections = false  - Libcurl will reuse connections
LogInit:  - MaxHostConnections = 16  - Libcurl will limit the number of connections to a host
LogInit:  - LocalHostAddr = Default
LogInit:  - BufferSize = 65536
LogInit: WinSock: version 1.1 (2.2), MaxSocks=32767, MaxUdp=65467
LogOnline: OSS: Created online subsystem instance for: NULL
LogOnline: OSS: TryLoadSubsystemAndSetDefault: Loaded subsystem for module [NULL]
LogInit: Build: ++UE5+Release-5.0-CL-19505902
LogInit: Engine Version: 5.0.0-19505902+++UE5+Release-5.0
LogInit: Compatible Engine Version: 5.0.0-19505902+++UE5+Release-5.0
LogInit: Net CL: 19505902
LogInit: OS: Windows 10 (21H2) (), CPU: AMD Ryzen 9 5900X 12-Core Processor            , GPU: NVIDIA GeForce RTX 3080
LogInit: Compiled (64-bit): Mar 25 2022 04:05:33
LogInit: Compiled with Visual C++: 19.29.30138.00
LogInit: Build Configuration: Development
LogInit: Branch Name: ++UE5+Release-5.0
LogInit: Command Line: 
LogInit: Base Directory: C:/Program Files/Epic Games/UE_5.0/Engine/Binaries/Win64/
LogInit: Allocator: Mimalloc
LogInit: Installed Engine Build: 1
LogDevObjectVersion: Number of dev versions registered: 34
LogDevObjectVersion:   Dev-Blueprints (B0D832E4-1F89-4F0D-ACCF-7EB736FD4AA2): 10
LogDevObjectVersion:   Dev-Build (E1C64328-A22C-4D53-A36C-8E866417BD8C): 0
LogDevObjectVersion:   Dev-Core (375EC13C-06E4-48FB-B500-84F0262A717E): 4
LogDevObjectVersion:   Dev-Editor (E4B068ED-F494-42E9-A231-DA0B2E46BB41): 40
LogDevObjectVersion:   Dev-Framework (CFFC743F-43B0-4480-9391-14DF171D2073): 37
LogDevObjectVersion:   Dev-Mobile (B02B49B5-BB20-44E9-A304-32B752E40360): 3
LogDevObjectVersion:   Dev-Networking (A4E4105C-59A1-49B5-A7C5-40C4547EDFEE): 0
LogDevObjectVersion:   Dev-Online (39C831C9-5AE6-47DC-9A44-9C173E1C8E7C): 0
LogDevObjectVersion:   Dev-Physics (78F01B33-EBEA-4F98-B9B4-84EACCB95AA2): 20
LogDevObjectVersion:   Dev-Platform (6631380F-2D4D-43E0-8009-CF276956A95A): 0
LogDevObjectVersion:   Dev-Rendering (12F88B9F-8875-4AFC-A67C-D90C383ABD29): 45
LogDevObjectVersion:   Dev-Sequencer (7B5AE74C-D270-4C10-A958-57980B212A5A): 13
LogDevObjectVersion:   Dev-VR (D7296918-1DD6-4BDD-9DE2-64A83CC13884): 3
LogDevObjectVersion:   Dev-LoadTimes (C2A15278-BFE7-4AFE-6C17-90FF531DF755): 1
LogDevObjectVersion:   Private-Geometry (6EACA3D4-40EC-4CC1-B786-8BED09428FC5): 3
LogDevObjectVersion:   Dev-AnimPhys (29E575DD-E0A3-4627-9D10-D276232CDCEA): 17
LogDevObjectVersion:   Dev-Anim (AF43A65D-7FD3-4947-9873-3E8ED9C1BB05): 15
LogDevObjectVersion:   Dev-ReflectionCapture (6B266CEC-1EC7-4B8F-A30B-E4D90942FC07): 1
LogDevObjectVersion:   Dev-Automation (0DF73D61-A23F-47EA-B727-89E90C41499A): 1
LogDevObjectVersion:   FortniteMain (601D1886-AC64-4F84-AA16-D3DE0DEAC7D6): 59
LogDevObjectVersion:   FortniteRelease (E7086368-6B23-4C58-8439-1B7016265E91): 3
LogDevObjectVersion:   Dev-Enterprise (9DFFBCD6-494F-0158-E221-12823C92A888): 10
LogDevObjectVersion:   Dev-Niagara (F2AED0AC-9AFE-416F-8664-AA7FFA26D6FC): 1
LogDevObjectVersion:   Dev-Destruction (174F1F0B-B4C6-45A5-B13F-2EE8D0FB917D): 10
LogDevObjectVersion:   Dev-Physics-Ext (35F94A83-E258-406C-A318-09F59610247C): 41
LogDevObjectVersion:   Dev-PhysicsMaterial-Chaos (B68FC16E-8B1B-42E2-B453-215C058844FE): 1
LogDevObjectVersion:   Dev-CineCamera (B2E18506-4273-CFC2-A54E-F4BB758BBA07): 1
LogDevObjectVersion:   Dev-VirtualProduction (64F58936-FD1B-42BA-BA96-7289D5D0FA4E): 1
LogDevObjectVersion:   UE5-Main (697DD581-E64F-41AB-AA4A-51ECBEB7B628): 59
LogDevObjectVersion:   UE5-Release (D89B5E42-24BD-4D46-8412-ACA8DF641779): 36
LogDevObjectVersion:   UE5-PrivateFrosty (59DA5D52-1232-4948-B878-597870B8E98B): 8
LogDevObjectVersion:   UE5-Dev-Cooker (26075A32-730F-4708-88E9-8C32F1599D05): 0
LogDevObjectVersion:   Dev-MediaFramework (6F0ED827-A609-4895-9C91-998D90180EA4): 2
LogDevObjectVersion:   UE5-Dev-LWCRendering (30D58BE3-95EA-4282-A6E3-B159D8EBB06A): 1
LogInit: Presizing for max 25165824 objects, including 0 objects not considered by GC, pre-allocating 0 bytes for permanent pool.
LogInit: Object subsystem initialized
LogConfig: CVar [[con.DebugLateDefault:1]] deferred - dummy variable created
LogConfig: CVar [[con.DebugLateCheat:1]] deferred - dummy variable created
LogConfig: CVar [[r.DetectAndWarnOfBadDrivers:0]] deferred - dummy variable created
LogConfig: CVar [[LogNamedEventFilters:Frame *]] deferred - dummy variable created
LogConfig: CVar [[framepro.ScopeMinTimeMicroseconds:10]] deferred - dummy variable created
LogConfig: CVar [[QualityLevelMapping:high]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: Applying CVar settings from Section [/Script/Engine.RendererSettings] File [Engine]
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VisualizeCalibrationColorMaterialPath:/Engine/EngineMaterials/PPM_DefaultCalibrationColor.PPM_DefaultCalibrationColor]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VisualizeCalibrationGrayscaleMaterialPath:/Engine/EngineMaterials/PPM_DefaultCalibrationGrayscale.PPM_DefaultCalibrationGrayscale]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[MaxSkinBones:(Default=65536,PerPlatform=(("Mobile", 256)))]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: Applying CVar settings from Section [/Script/Engine.RendererOverrideSettings] File [Engine]
[2022.04.17-08.09.04:800][  0]LogConfig: Applying CVar settings from Section [/Script/Engine.StreamingSettings] File [Engine]
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[s.MaxPackageSummarySize:16384]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[FixedBootOrder:/Script/Engine/Default__SoundBase]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[FixedBootOrder:/Script/Engine/Default__MaterialInterface]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[FixedBootOrder:/Script/Engine/Default__DeviceProfileManager]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: Applying CVar settings from Section [/Script/Engine.GarbageCollectionSettings] File [Engine]
[2022.04.17-08.09.04:800][  0]LogConfig: Applying CVar settings from Section [/Script/Engine.NetworkSettings] File [Engine]
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[NetworkEmulationProfiles:(ProfileName="Average",ToolTip="Simulates average internet conditions")]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[NetworkEmulationProfiles:(ProfileName="Bad",ToolTip="Simulates laggy internet conditions")]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: Applying CVar settings from Section [/Script/UnrealEd.CookerSettings] File [Engine]
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[DefaultPVRTCQuality:1]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[DefaultASTCQualityBySpeed:1]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[DefaultASTCQualityBySize:3]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:WidgetBlueprint]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:GroupActor]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:MetaData]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:ObjectRedirector]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:NavMeshRenderingComponent]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:ReflectionCaptureComponent]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:TextRenderComponent]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:Font]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:InterpCurveEdSetup]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:MaterialExpression]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:MatineeActorCameraAnim]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:NiagaraEmitter]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:NiagaraScript]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:ParticleEmitter]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:ParticleLODLevel]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:ParticleModule]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:SubUVAnimation]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:SoundNode]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedServer:GameplayEffectUIData]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedClient:WidgetBlueprint]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedClient:GroupActor]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedClient:MetaData]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedClient:ObjectRedirector]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedClient:InterpCurveEdSetup]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[ClassesExcludedOnDedicatedClient:MatineeActorCameraAnim]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.AllowStaticLighting]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.GBuffer]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.VelocityOutputPass]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.SelectiveBasePassOutputs]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.DBuffer]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.Shaders.Symbols]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.Shaders.GenerateSymbols]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.Shaders.WriteSymbols]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.Shaders.AllowUniqueSymbols]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.Shaders.ExtraData]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.Shaders.Optimize]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.CompileShadersForDevelopment]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.MobileHDR]] deferred - dummy variable created
[2022.04.17-08.09.04:800][  0]LogConfig: CVar [[VersionedIntRValues:r.UsePreExposure]] deferred - dummy variable created
[2022.04.17-08.09.04:801][  0]LogConfig: Applying CVar settings from Section [ViewDistanceQuality@3] File [Scalability]
[2022.04.17-08.09.04:801][  0]LogConfig: Applying CVar settings from Section [AntiAliasingQuality@3] File [Scalability]
[2022.04.17-08.09.04:801][  0]LogConfig: Applying CVar settings from Section [ShadowQuality@3] File [Scalability]
[2022.04.17-08.09.04:802][  0]LogConfig: Applying CVar settings from Section [GlobalIlluminationQuality@3] File [Scalability]
[2022.04.17-08.09.04:802][  0]LogConfig: Applying CVar settings from Section [ReflectionQuality@3] File [Scalability]
[2022.04.17-08.09.04:802][  0]LogConfig: Applying CVar settings from Section [PostProcessQuality@3] File [Scalability]
[2022.04.17-08.09.04:802][  0]LogConfig: Applying CVar settings from Section [TextureQuality@3] File [Scalability]
[2022.04.17-08.09.04:802][  0]LogConfig: Applying CVar settings from Section [EffectsQuality@3] File [Scalability]
[2022.04.17-08.09.04:802][  0]LogConfig: Applying CVar settings from Section [FoliageQuality@3] File [Scalability]
[2022.04.17-08.09.04:802][  0]LogConfig: Applying CVar settings from Section [ShadingQuality@3] File [Scalability]
[2022.04.17-08.09.04:802][  0]LogConfig: CVar [[r.HairStrands.Interpolation.UseSingleGuide:0]] deferred - dummy variable created
[2022.04.17-08.09.04:812][  0]LogD3D12RHI: Aftermath initialized
[2022.04.17-08.09.04:812][  0]LogD3D12RHI: Loading WinPixEventRuntime.dll for PIX profiling (from ../../../Engine/Binaries/ThirdParty/Windows/WinPixEventRuntime/x64).
[2022.04.17-08.09.04:915][  0]LogD3D12RHI: Found D3D12 adapter 0: NVIDIA GeForce RTX 3080 (Max supported Feature Level 12_1, shader model 6.6)
[2022.04.17-08.09.04:915][  0]LogD3D12RHI: Adapter has 10077MB of dedicated video memory, 0MB of dedicated system memory, and 16356MB of shared system memory, 1 output[s]
[2022.04.17-08.09.04:920][  0]LogD3D12RHI: Found D3D12 adapter 1: Microsoft Basic Render Driver (Max supported Feature Level 12_1, shader model 6.2)
[2022.04.17-08.09.04:920][  0]LogD3D12RHI: Adapter has 0MB of dedicated video memory, 0MB of dedicated system memory, and 16356MB of shared system memory, 0 output[s]
[2022.04.17-08.09.04:920][  0]LogD3D12RHI: Chosen D3D12 Adapter Id = 0
[2022.04.17-08.09.04:920][  0]LogInit: Selected Device Profile: [WindowsEditor]
[2022.04.17-08.09.04:920][  0]LogDeviceProfileManager: Applying CVar settings loaded from the selected device profile: [WindowsEditor]
[2022.04.17-08.09.04:920][  0]LogHAL: Display: Platform has ~ 32 GB [34302398464 / 34359738368 / 32], which maps to Largest [LargestMinGB=32, LargerMinGB=12, DefaultMinGB=8, SmallerMinGB=6, SmallestMinGB=0)
[2022.04.17-08.09.04:920][  0]LogDeviceProfileManager: Going up to parent DeviceProfile [Windows]
[2022.04.17-08.09.04:920][  0]LogDeviceProfileManager: Going up to parent DeviceProfile []
[2022.04.17-08.09.04:920][  0]LogConfig: Applying CVar settings from Section [Startup] File [../../../Engine/Config/ConsoleVariables.ini]
[2022.04.17-08.09.04:921][  0]LogConfig: Applying CVar settings from Section [ConsoleVariables] File [Engine]
[2022.04.17-08.09.04:921][  0]LogConfig: Applying CVar settings from Section [ConsoleVariables] File [C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Saved/Config/WindowsEditor/Editor.ini]
[2022.04.17-08.09.04:921][  0]LogInit: Computer: DESKTOP-VQR5I82
[2022.04.17-08.09.04:921][  0]LogInit: User: Admin
[2022.04.17-08.09.04:921][  0]LogInit: CPU Page size=4096, Cores=12
[2022.04.17-08.09.04:921][  0]LogInit: High frequency timer resolution =10.000000 MHz
[2022.04.17-08.09.04:921][  0]LogMemory: Memory total: Physical=31.9GB (32GB approx)
[2022.04.17-08.09.04:921][  0]LogMemory: Platform Memory Stats for WindowsEditor
[2022.04.17-08.09.04:921][  0]LogMemory: Process Physical Memory: 295.91 MB used, 321.75 MB peak
[2022.04.17-08.09.04:921][  0]LogMemory: Process Virtual Memory: 281.12 MB used, 281.12 MB peak
[2022.04.17-08.09.04:921][  0]LogMemory: Physical Memory: 21960.58 MB used,  10752.73 MB free, 32713.32 MB total
[2022.04.17-08.09.04:921][  0]LogMemory: Virtual Memory: 33340.33 MB used,  7983.33 MB free, 41323.66 MB total
[2022.04.17-08.09.04:921][  0]LogCsvProfiler: Display: Metadata set : extradevelopmentmemorymb="0"
[2022.04.17-08.09.04:925][  0]LogWindows: WindowsPlatformFeatures enabled
[2022.04.17-08.09.04:935][  0]LogInit: Physics initialised using underlying interface: Chaos
[2022.04.17-08.09.04:936][  0]LogInit: Using OS detected language (en-US).
[2022.04.17-08.09.04:936][  0]LogInit: Using OS detected locale (en-US).
[2022.04.17-08.09.04:941][  0]LogTextLocalizationManager: No specific localization for 'en-US' exists, so 'en' will be used for the language.
[2022.04.17-08.09.05:043][  0]LogInit: Setting process to per monitor DPI aware
[2022.04.17-08.09.05:056][  0]LogWindowsTextInputMethodSystem: Available input methods:
[2022.04.17-08.09.05:056][  0]LogWindowsTextInputMethodSystem:   - English (United States) - (Keyboard).
[2022.04.17-08.09.05:056][  0]LogWindowsTextInputMethodSystem:   - Korean (Korea) - Microsoft IME (TSF IME).
[2022.04.17-08.09.05:056][  0]LogWindowsTextInputMethodSystem: Activated input method: English (United States) - (Keyboard).
[2022.04.17-08.09.05:068][  0]LogSlate: New Slate User Created.  User Index 0, Is Virtual User: 0
[2022.04.17-08.09.05:068][  0]LogSlate: Slate User Registered.  User Index 0, Is Virtual User: 0
[2022.04.17-08.09.05:154][  0]LogD3D12RHI: InitD3DDevice: -D3DDebug = off -D3D12GPUValidation = off
[2022.04.17-08.09.05:156][  0]LogD3D12RHI: [Aftermath] Aftermath crash dumping enabled
[2022.04.17-08.09.05:156][  0]LogD3D12RHI: Emitting draw events for PIX profiling.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: [Aftermath] Aftermath enabled and primed
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: [Aftermath] Aftermath resource tracking enabled
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: ID3D12Device1 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: ID3D12Device2 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: ID3D12Device3 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: ID3D12Device4 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: ID3D12Device5 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: ID3D12Device6 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: ID3D12Device7 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: D3D12 ray tracing tier 1.0 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: D3D12 ray tracing tier 1.1 is supported.
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: Mesh shader tier 1.0 is supported
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: AtomicInt64OnTypedResource is supported
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: AtomicInt64OnGroupShared is supported
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: AtomicInt64OnDescriptorHeapResource is supported
[2022.04.17-08.09.05:223][  0]LogD3D12RHI: Shader Model 6.6 atomic64 is supported
[2022.04.17-08.09.05:285][  0]LogD3D12RHI: [GPUBreadCrumb] Successfully setup breadcrumb resource for 3D Queue 0
[2022.04.17-08.09.05:291][  0]LogD3D12RHI: [GPUBreadCrumb] Successfully setup breadcrumb resource for Copy Queue 0
[2022.04.17-08.09.05:303][  0]LogD3D12RHI: [GPUBreadCrumb] Successfully setup breadcrumb resource for Compute Queue 0
[2022.04.17-08.09.05:345][  0]LogD3D12RHI: Display: Not using pipeline state disk cache per r.D3D12.PSO.DiskCache=0
[2022.04.17-08.09.05:345][  0]LogD3D12RHI: Display: Not using driver-optimized pipeline state disk cache per r.D3D12.PSO.DriverOptimizedDiskCache=0
[2022.04.17-08.09.05:364][  0]LogD3D12RHI:     GPU DeviceId: 0x2206 (for the marketing name, search the web for "GPU Device Id")
[2022.04.17-08.09.05:364][  0]LogWindows: EnumDisplayDevices:
[2022.04.17-08.09.05:364][  0]LogWindows:    0. 'NVIDIA GeForce RTX 3080' (P:1 D:1)
[2022.04.17-08.09.05:364][  0]LogWindows:    1. 'NVIDIA GeForce RTX 3080' (P:0 D:0)
[2022.04.17-08.09.05:365][  0]LogWindows:    2. 'NVIDIA GeForce RTX 3080' (P:0 D:0)
[2022.04.17-08.09.05:365][  0]LogWindows:    3. 'NVIDIA GeForce RTX 3080' (P:0 D:0)
[2022.04.17-08.09.05:365][  0]LogWindows: DebugString: FoundDriverCount:4 
[2022.04.17-08.09.05:365][  0]LogD3D12RHI:     Adapter Name: NVIDIA GeForce RTX 3080
[2022.04.17-08.09.05:365][  0]LogD3D12RHI:   Driver Version: 512.15 (internal:30.0.15.1215, unified:512.15)
[2022.04.17-08.09.05:365][  0]LogD3D12RHI:      Driver Date: 3-17-2022
[2022.04.17-08.09.05:365][  0]LogRHI: Texture pool is 5864 MB (70% of 8378 MB)
[2022.04.17-08.09.05:365][  0]LogD3D12RHI: Async texture creation enabled
[2022.04.17-08.09.05:365][  0]LogD3D12RHI: RHI has support for 64 bit atomics
[2022.04.17-08.09.05:374][  0]LogRHI: GeForceNow SDK initialized: 0
[2022.04.17-08.09.05:378][  0]LogTurnkeySupport: Running Turnkey SDK detection: ' -ScriptsForProject="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" Turnkey -utf8output -WaitForUATMutex -command=VerifySdk -ReportFilename="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/TurnkeyReport_0.log" -log="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/TurnkeyLog_0.log" -project="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject"  -platform=all'
[2022.04.17-08.09.05:378][  0]LogMonitoredProcess: Running Serialized UAT: [ cmd.exe /c ""C:/Program Files/Epic Games/UE_5.0/Engine/Build/BatchFiles/RunUAT.bat"  -ScriptsForProject="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" Turnkey -utf8output -WaitForUATMutex -command=VerifySdk -ReportFilename="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/TurnkeyReport_0.log" -log="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/TurnkeyLog_0.log" -project="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject"  -platform=all" ]
[2022.04.17-08.09.05:392][  0]LogTextureFormatETC2: Display: ETC2 Texture loading DLL: TextureConverter.dll
[2022.04.17-08.09.05:398][  0]LogTextureFormatOodle: Display: Oodle Texture TFO init; latest sdk version = 2.9.5
[2022.04.17-08.09.05:398][  0]LogTextureFormatOodle: Display: Oodle Texture loading DLL: oo2tex_win64_2.9.5.dll
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_ASTC'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_DXT'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_ETC2'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'AndroidClient'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_ASTCClient'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_DXTClient'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_ETC2Client'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_Multi'
[2022.04.17-08.09.05:404][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_MultiClient'
[2022.04.17-08.09.05:419][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'HoloLens'
[2022.04.17-08.09.05:419][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'HoloLensClient'
[2022.04.17-08.09.05:422][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'IOS'
[2022.04.17-08.09.05:422][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'IOSClient'
[2022.04.17-08.09.05:424][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Linux'
[2022.04.17-08.09.05:425][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxEditor'
[2022.04.17-08.09.05:425][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxServer'
[2022.04.17-08.09.05:425][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxClient'
[2022.04.17-08.09.05:427][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxArm64'
[2022.04.17-08.09.05:427][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxArm64Server'
[2022.04.17-08.09.05:427][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxArm64Client'
[2022.04.17-08.09.05:428][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'TVOS'
[2022.04.17-08.09.05:428][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'TVOSClient'
[2022.04.17-08.09.05:432][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'Windows'
[2022.04.17-08.09.05:432][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'WindowsEditor'
[2022.04.17-08.09.05:432][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'WindowsServer'
[2022.04.17-08.09.05:432][  0]LogTargetPlatformManager: Display: Loaded TargetPlatform 'WindowsClient'
[2022.04.17-08.09.05:432][  0]LogTargetPlatformManager: Display: Building Assets For WindowsEditor
[2022.04.17-08.09.05:438][  0]LogAudioDebug: Display: Lib vorbis DLL was dynamically loaded.
[2022.04.17-08.09.05:439][  0]LogTargetPlatformManager: Unable to find audio format BINKA from hinted modules, loading all potential format modules to find it
[2022.04.17-08.09.05:439][  0]LogTargetPlatformManager: Loaded format module AudioFormatADPCM
[2022.04.17-08.09.05:439][  0]LogTargetPlatformManager:   ADPCM
[2022.04.17-08.09.05:439][  0]LogTargetPlatformManager:   PCM
[2022.04.17-08.09.05:441][  0]LogTargetPlatformManager: Loaded format module AudioFormatBink
[2022.04.17-08.09.05:441][  0]LogTargetPlatformManager:   BINKA
[2022.04.17-08.09.05:441][  0]LogTargetPlatformManager: Loaded format module AudioFormatOgg
[2022.04.17-08.09.05:441][  0]LogTargetPlatformManager:   OGG
[2022.04.17-08.09.05:441][  0]LogTargetPlatformManager: Loaded format module AudioFormatOpus
[2022.04.17-08.09.05:441][  0]LogTargetPlatformManager:   OPUS
[2022.04.17-08.09.05:472][  0]LogTargetPlatformManager: Unable to find shader format SF_METAL from hinted modules, loading all potential format modules to find it
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager: Loaded format module MetalShaderFormat
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   SF_METAL
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   SF_METAL_MRT
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   SF_METAL_TVOS
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   SF_METAL_MRT_TVOS
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   SF_METAL_SM5
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   SF_METAL_MACES3_1
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   SF_METAL_MRT_MAC
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager: Loaded format module ShaderFormatD3D
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   PCD3D_SM6
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   PCD3D_SM5
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   PCD3D_ES31
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   D3D_ES3_1_HOLOLENS
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager: Loaded format module ShaderFormatOpenGL
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   GLSL_150_ES31
[2022.04.17-08.09.05:476][  0]LogTargetPlatformManager:   GLSL_ES3_1_ANDROID
[2022.04.17-08.09.05:478][  0]LogTargetPlatformManager: Loaded format module ShaderFormatVectorVM
[2022.04.17-08.09.05:478][  0]LogTargetPlatformManager:   VVM_1_0
[2022.04.17-08.09.05:478][  0]LogTargetPlatformManager: Loaded format module VulkanShaderFormat
[2022.04.17-08.09.05:478][  0]LogTargetPlatformManager:   SF_VULKAN_SM5
[2022.04.17-08.09.05:479][  0]LogTargetPlatformManager:   SF_VULKAN_ES31_ANDROID
[2022.04.17-08.09.05:479][  0]LogTargetPlatformManager:   SF_VULKAN_ES31
[2022.04.17-08.09.05:479][  0]LogTargetPlatformManager:   SF_VULKAN_SM5_ANDROID
[2022.04.17-08.09.05:479][  0]LogRendererCore: Ray tracing is disabled. Reason: r.RayTracing=0.
[2022.04.17-08.09.05:479][  0]LogShaderCompilers: Display: Compiling shader autogen file: ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/ShaderAutogen/PCD3D_SM5/AutogenShaderHeaders.ush
[2022.04.17-08.09.05:479][  0]LogShaderCompilers: Display: Failed to delete old shader autogen file: ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/ShaderAutogen/PCD3D_SM5/AutogenShaderHeaders.ush
[2022.04.17-08.09.05:480][  0]LogShaderCompilers: Display: Shader autogen file written: ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/ShaderAutogen/PCD3D_SM5/AutogenShaderHeaders.ush
[2022.04.17-08.09.05:480][  0]LogShaderCompilers: Display: Compiling shader autogen file: ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/ShaderAutogen/PCD3D_ES31/AutogenShaderHeaders.ush
[2022.04.17-08.09.05:481][  0]LogShaderCompilers: Display: Failed to delete old shader autogen file: ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/ShaderAutogen/PCD3D_ES31/AutogenShaderHeaders.ush
[2022.04.17-08.09.05:481][  0]LogShaderCompilers: Display: Shader autogen file written: ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/ShaderAutogen/PCD3D_ES31/AutogenShaderHeaders.ush
[2022.04.17-08.09.05:483][  0]LogDerivedDataCache: FDerivedDataBackendGraph:  Pak pak cache file ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/DerivedDataCache/DDC.ddp not found, will not use a pak cache.
[2022.04.17-08.09.05:483][  0]LogDerivedDataCache: Unable to find inner node Pak for hierarchy Hierarchy.
[2022.04.17-08.09.05:483][  0]LogDerivedDataCache: FDerivedDataBackendGraph:  CompressedPak pak cache file ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/DerivedDataCache/Compressed.ddp not found, will not use a pak cache.
[2022.04.17-08.09.05:483][  0]LogDerivedDataCache: Unable to find inner node CompressedPak for hierarchy Hierarchy.
[2022.04.17-08.09.05:499][  0]LogDerivedDataCache: Display: ../../../Engine/DerivedDataCache/Compressed.ddp: Opened pak cache for reading. (1091 MiB)
[2022.04.17-08.09.05:500][  0]LogDerivedDataCache: FDerivedDataBackendGraph:  EnterprisePak pak cache file ../../../Enterprise/DerivedDataCache/Compressed.ddp not found, will not use a pak cache.
[2022.04.17-08.09.05:500][  0]LogDerivedDataCache: Unable to find inner node EnterprisePak for hierarchy Hierarchy.
[2022.04.17-08.09.05:506][  0]LogDerivedDataCache: Speed tests for C:/Users/Admin/AppData/Local/UnrealEngine/Common/DerivedDataCache took 0.01 seconds
[2022.04.17-08.09.05:506][  0]LogDerivedDataCache: Display: Performance to C:/Users/Admin/AppData/Local/UnrealEngine/Common/DerivedDataCache: Latency=0.02ms. RandomReadSpeed=441.95MBs, RandomWriteSpeed=212.35MBs. Assigned SpeedClass 'Local'
[2022.04.17-08.09.05:507][  0]LogDerivedDataCache: Using Local data cache path C:/Users/Admin/AppData/Local/UnrealEngine/Common/DerivedDataCache: Writable
[2022.04.17-08.09.05:507][  0]LogDerivedDataCache: Shared data cache path not found in *engine.ini, will not use an Shared cache.
[2022.04.17-08.09.05:507][  0]LogDerivedDataCache: Unable to find inner node Shared for hierarchy Hierarchy.
[2022.04.17-08.09.05:512][  0]LogVirtualization: VirtualizationSystem name found in ini file: None
[2022.04.17-08.09.05:512][  0]LogVirtualization: FNullVirtualizationSystem mounted, virtualization will be disabled
[2022.04.17-08.09.05:512][  0]LogShaderCompilers: Guid format shader working directory is -26 characters bigger than the processId version (../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/Shaders/WorkingDirectory/51464/).
[2022.04.17-08.09.05:512][  0]LogShaderCompilers: Cleaned the shader compiler working directory 'C:/Users/Admin/AppData/Local/Temp/UnrealShaderWorkingDir/EBF98D0B4665A02DBBCF42B66FD2C73C/'.
[2022.04.17-08.09.05:513][  0]LogXGEController: Cannot use XGE Controller as Incredibuild is not installed on this machine.
[2022.04.17-08.09.05:513][  0]LogShaderCompilers: Display: Using Local Shader Compiler with 12 workers.
[2022.04.17-08.09.06:512][  0]LogTurnkeySupport: Completed SDK detection: ExitCode = 0
[2022.04.17-08.09.06:512][  0]LogSlate: Using FreeType 2.10.0
[2022.04.17-08.09.06:512][  0]LogSlate: SlateFontServices - WITH_FREETYPE: 1, WITH_HARFBUZZ: 1
[2022.04.17-08.09.06:540][  0]LogAssetRegistry: FAssetRegistry took 0.0100 seconds to start up
[2022.04.17-08.09.06:546][  0]LogEditorDomain: Display: EditorDomain is Disabled
[2022.04.17-08.09.06:700][  0]LogSerialization: UsePackageTrailer: 'false'
[2022.04.17-08.09.06:701][  0]LogTexture: Display: Texture Encode Speed: FinalIfAvailable (editor).
[2022.04.17-08.09.06:909][  0]LogInit: Selected Device Profile: [WindowsEditor]
[2022.04.17-08.09.06:909][  0]LogDeviceProfileManager: Active device profile: [000006A1CB524B40][000006A1C4825000 50] WindowsEditor
[2022.04.17-08.09.06:909][  0]LogDeviceProfileManager: Profiles: [000006A1CB524600][000006A1C482A000 50] Windows, [000006A1CB524B40][000006A1C4825000 50] WindowsEditor, [000006A1CB522840][000006A1C4822800 50] WindowsServer, [000006A1CB520540][000006A1BEE7A000 50] WindowsClient, [000006A1CB523B80][000006A1C4827800 50] IOS, [000006A1CB520000][000006A1CB510000 50] iPadAir2, [000006A1CB524EC0][000006A1CB517800 50] IPadPro, [000006A1CB525240][000006A1CB515000 50] iPadAir3, [000006A1CB523480][000006A1CB51A000 50] iPadAir4, [000006A1CB520380][000006A1CB51C800 50] iPadMini4, [000006A1CB520FC0][000006A1A0F25000 50] iPadMini5, [000006A1CB525400][000006A1CB530000 50] iPadMini6, [000006A1CB527FC0][000006A1CB53A000 50] iPhone6S, [000006A1CB528340][000006A1CB537800 50] iPhone7, [000006A1CB5286C0][000006A1CB535000 50] iPodTouch7, [000006A1CB523100][000006A1CB53C800 50] iPhone6SPlus, [000006A1CB527C40][000006A1CB512800 50] iPhone7Plus, [000006A1CB522140][000006A1CB570000 50] iPhoneSE, [000006A1CB524980][000006A1CB575000 50] iPhone8, [000006A1CB527700][000006A1CB577800 50] iPhone8Plus, [000006A1CB5239C0][000006A1CB57A000 50] iPhoneX, [000006A1CB522BC0][000006A1CB57C800 50] iPhoneXS, [000006A1CB527540][000006A1CB532800 50] iPhoneXSMax, [000006A1CB528A40][000006A1CB580000 50] iPhoneXR, [000006A1CB522A00][000006A1CB585000 50] iPhone11, [000006A1CB527380][000006A1CB587800 50] iPhone11Pro, [000006A1CB521F80][000006A1CB58A000 50] iPhone11ProMax, [000006A1CB528180][000006A1CB58C800 50] iPhoneSE2, [000006A1CB5216C0][000006A1CB572800 50] iPhone12Mini, [000006A1CB527E00][000006A1CB590000 50] iPhone12, [000006A1CB521500][000006A1CB595000 50] iPhone12Pro, [000006A1CB522300][000006A1CB597800 50] iPhone12ProMax, [000006A1CB520C40][000006A1CB59A000 50] iPhone13Mini, [000006A1CB526580][000006A1CB59C800 50] iPhone13, [000006A1CB525780][000006A1CB582800 50] iPhone13Pro, [000006A1CB520A80][000006A1CB5A0000 50] iPhone13ProMax, [000006A1CB521340][000006A1CB5A5000 50] iPadPro105, [000006A1CB526E40][000006A1CB5A7800 50] iPadPro129, [000006A1CB523800][000006A1CB5AA000 50] iPadPro97, [000006A1CB520700][000006A1CB5AC800 50] iPadPro2_129, [000006A1CB524280][000006A1CB592800 50] iPad5, [000006A1CB5208C0][000006A1CB5B0000 50] iPad6, [000006A1CB526C80][000006A1CB5B5000 50] iPad7, [000006A1CB5240C0][000006A1CB5B7800 50] iPad8, [000006A1CB527000][000006A1CB5BA000 50] iPad9, [000006A1CB5255C0][000006A1CB5BC800 50] iPadPro11, [000006A1CB526040][000006A1CB5A2800 50] iPadPro2_11, [000006A1CB528C00][000006A1CB5D0000 50] iPadPro3_11, [000006A1CB523F00][000006A1CB5D5000 50] iPadPro3_129, [000006A1CB526900][000006A1CB5D7800 50] iPadPro4_129, [000006A1CB523640][000006A1CB5DA000 50] iPadPro5_129, [000006A1CB5271C0][000006A1CB5DC800 50] AppleTV, [000006A1CB521A40][000006A1CB5B2800 50] AppleTV4K, [000006A1CB526740][000006A1CB5E0000 50] TVOS, [000006A1CB52A800][000006A1CB5E7800 50] Mac, [000006A1CB52AB80][000006A1CB5E5000 50] MacEditor, [000006A1CB5232C0][000006A1CB5EA000 50] MacClient, [000006A1CB525940][000006A1CB5EC800 50] MacServer, [000006A1CB528500][000006A1CB600000 50] Linux, [000006A1CB5278C0][000006A1CB602800 50] LinuxEditor, [000006A1CB52A100][000006A1CB607800 50] LinuxArm64Editor, [000006A1CB526200][000006A1CB60A000 50] LinuxArm64, [000006A1CB529BC0][000006A1CB60C800 50] LinuxClient, [000006A1CB5201C0][000006A1CB5D2800 50] LinuxArm64Client, [000006A1CB5294C0][000006A1CB605000 50] LinuxServer, [000006A1CB5263C0][000006A1CB5F0000 50] LinuxArm64Server, [000006A1CB529680][000006A1CB5F5000 50] Android, [000006A1CB5224C0][000006A1CB5F7800 50] Android_Preview_OpenGL, [000006A1CB525E80][000006A1CB5FA000 50] Android_Preview_Vulkan, [000006A1CB522680][000006A1CB5FC800 50] Android_Low, [000006A1CB522F40][000006A1CB5E2800 50] Android_Mid, [000006A1CB529300][000006A1CB610000 50] Android_High, [000006A1CB520E00][000006A1CB615000 50] Android_Default, [000006A1CB527A80][000006A1CB617800 50] Android_Adreno4xx, [000006A1CB526AC0][000006A1CB61A000 50] Android_Adreno5xx_Low, [000006A1CB528DC0][000006A1CB61C800 50] Android_Adreno5xx, [000006A1CB524D00][000006A1CB5F2800 50] Android_Adreno6xx, [000006A1CB52A2C0][000006A1CB620000 50] Android_Adreno6xx_Vulkan, [000006A1CB525CC0][000006A1CB625000 50] Android_Adreno7xx, [000006A1CB522D80][000006A1CB627800 50] Android_Adreno7xx_Vulkan, [000006A1CB52B440][000006A1CB62A000 50] Android_Mali_T6xx, [000006A1CB524440][000006A1CB62C800 50] Android_Mali_T7xx, [000006A1CB52B7C0][000006A1CB612800 50] Android_Mali_T8xx, [000006A1CB529A00][000006A1CB630000 50] Android_Mali_G71, [000006A1CB52BB40][000006A1CB635000 50] Android_Mali_G72, [000006A1CB52BD00][000006A1CB637800 50] Android_Mali_G72_Vulkan, [000006A1CB529D80][000006A1CB63A000 50] Android_Mali_G76, [000006A1CB523D40][000006A1CB63C800 50] Android_Mali_G76_Vulkan, [000006A1CB52B600][000006A1CB622800 50] Android_Mali_G77, [000006A1CB525B00][000006A1CB640000 50] Android_Mali_G77_Vulkan, [000006A1CB52B980][000006A1CB645000 50] Android_Mali_G78, [000006A1CB521180][000006A1CB647800 50] Android_Mali_G78_Vulkan, [000006A1CB521C00][000006A1CB64A000 50] Android_Mali_G710, [000006A1CB52BEC0][000006A1CB64C800 50] Android_Mali_G710_Vulkan, [000006A1CB52C240][000006A1CB632800 50] Android_Xclipse_920, [000006A1CB52C080][000006A1CB650000 50] Android_Xclipse_920_Vulkan, [000006A1CB529F40][000006A1CB655000 50] Android_Vulkan_SM5, [000006A1CB52A9C0][000006A1CB657800 50] Android_PowerVR_G6xxx, [000006A1CB528880][000006A1CB65A000 50] Android_PowerVR_GT7xxx, [000006A1CB521DC0][000006A1CB65C800 50] Android_PowerVR_GE8xxx, [000006A1CB52D200][000006A1CB642800 50] Android_PowerVR_GM9xxx, [000006A1CB52CCC0][000006A1CB660000 50] Android_PowerVR_GM9xxx_Vulkan, [000006A1CB525080][000006A1CB665000 50] Android_TegraK1, [000006A1CB52AD40][000006A1CB667800 50] Android_Unknown_Vulkan, [000006A1CB52AF00][000006A1CB66A000 50] Oculus_Quest, [000006A1CB52D040][000006A1CB66C800 50] Oculus_Quest2, [000006A1CB52E380][000006A1CB652800 50] HoloLens, 
[2022.04.17-08.09.06:909][  0]LogCsvProfiler: Display: Metadata set : deviceprofile="WindowsEditor"
[2022.04.17-08.09.06:912][  0]LogTurnkeySupport: Turnkey Platform: Android: (Status=Invalid, Installed=, AutoSDK=, MinAllowed=r21a, MaxAllowed=r23a, Flags="Platform_InvalidHostPrerequisites", Error="Android Studio is not installed correctly.|Android SDK directory is not set correctly.")
[2022.04.17-08.09.06:912][  0]LogTurnkeySupport: Turnkey Platform: IOS: (Status=Invalid, Installed=, AutoSDK=, MinAllowed=1100.0.0.0, MaxAllowed=1399.0, Flags="Platform_ValidHostPrerequisites")
[2022.04.17-08.09.06:912][  0]LogTurnkeySupport: Turnkey Platform: Linux: (Status=Invalid, Installed=, AutoSDK=, MinAllowed=v10_clang-5.0.0-centos7, MaxAllowed=v19_clang-11.0.1-centos7, Flags="Platform_ValidHostPrerequisites")
[2022.04.17-08.09.06:912][  0]LogTurnkeySupport: Turnkey Platform: LinuxArm64: (Status=Invalid, Installed=, AutoSDK=, MinAllowed=v10_clang-5.0.0-centos7, MaxAllowed=v19_clang-11.0.1-centos7, Flags="Platform_ValidHostPrerequisites")
[2022.04.17-08.09.06:912][  0]LogTurnkeySupport: Turnkey Platform: Win64: (Status=Valid, Installed=10.0.19041.0, AutoSDK=, MinAllowed=10.0.00000.0, MaxAllowed=10.9.99999.0, Flags="InstalledSdk_ValidVersionExists")
[2022.04.17-08.09.06:930][  0]LogTexture: Display: Oodle Texture Encode Speed settings: Fast: RDO Off Lambda=0, Effort=Normal Final: RDO Off Lambda=0, Effort=Normal
[2022.04.17-08.09.07:065][  0]LogMeshReduction: Using QuadricMeshReduction for automatic static mesh reduction
[2022.04.17-08.09.07:065][  0]LogMeshReduction: Using SimplygonMeshReduction for automatic skeletal mesh reduction
[2022.04.17-08.09.07:065][  0]LogMeshReduction: Using ProxyLODMeshReduction for automatic mesh merging
[2022.04.17-08.09.07:065][  0]LogMeshReduction: No distributed automatic mesh merging module available
[2022.04.17-08.09.07:065][  0]LogMeshMerging: No distributed automatic mesh merging module available
[2022.04.17-08.09.07:075][  0]LogNetVersion: EmptyUE5Project 1.0.0, NetCL: 19505902, EngineNetVer: 23, GameNetVer: 0 (Checksum: 649595362)
[2022.04.17-08.09.07:168][  0]LogSlate: Border
[2022.04.17-08.09.07:168][  0]LogSlate: BreadcrumbButton
[2022.04.17-08.09.07:168][  0]LogSlate: Default
[2022.04.17-08.09.07:168][  0]LogSlate: Icons.Save
[2022.04.17-08.09.07:168][  0]LogSlate: Icons.Toolbar.Settings
[2022.04.17-08.09.07:168][  0]LogSlate: ListView
[2022.04.17-08.09.07:168][  0]LogSlate: SoftwareCursor_CardinalCross
[2022.04.17-08.09.07:168][  0]LogSlate: SoftwareCursor_Grab
[2022.04.17-08.09.07:168][  0]LogSlate: TableView.DarkRow
[2022.04.17-08.09.07:168][  0]LogSlate: TableView.Row
[2022.04.17-08.09.07:168][  0]LogSlate: TreeView
[2022.04.17-08.09.07:290][  0]SourceControl: Source control is disabled
[2022.04.17-08.09.07:309][  0]SourceControl: Source control is disabled
[2022.04.17-08.09.07:309][  0]SourceControl: Source control is disabled
[2022.04.17-08.09.07:392][  0]LogUObjectArray: 20557 objects as part of root set at end of initial load.
[2022.04.17-08.09.07:392][  0]LogUObjectAllocator: 5584248 out of 0 bytes used by permanent object pool.
[2022.04.17-08.09.07:392][  0]LogUObjectArray: CloseDisregardForGC: 0/0 objects in disregard for GC pool
[2022.04.17-08.09.07:560][  0]LogNiagaraDebuggerClient: Niagara Debugger Client Initialized | Session: 3B0F3E474A2D7C2081D420BC9DB647E1 | Instance: C0B8ED1E44EF5E868A055F9EE03D4A21 (DESKTOP-VQR5I82-51464).
[2022.04.17-08.09.07:671][  0]LogUdpMessaging: Initializing bridge on interface 0.0.0.0:0 to multicast group 230.0.0.1:6666.
[2022.04.17-08.09.07:677][  0]LogTcpMessaging: Initializing TcpMessaging bridge
[2022.04.17-08.09.07:683][  0]LogPython: Using Python 3.9.7
[2022.04.17-08.09.08:475][  0]SourceControl: Source control is disabled
[2022.04.17-08.09.08:484][  0]SourceControl: Source control is disabled
[2022.04.17-08.09.08:724][  0]SourceControl: Source control is disabled
[2022.04.17-08.09.08:761][  0]LogUProjectInfo: Found projects:
[2022.04.17-08.09.08:838][  0]LogOpenImageDenoise: OIDN starting up
[2022.04.17-08.09.08:849][  0]LogAndroidPermission: UAndroidPermissionCallbackProxy::GetInstance
[2022.04.17-08.09.08:862][  0]LogAudioCaptureCore: Display: No Audio Capture implementations found. Audio input will be silent.
[2022.04.17-08.09.08:862][  0]LogAudioCaptureCore: Display: No Audio Capture implementations found. Audio input will be silent.
[2022.04.17-08.09.08:941][  0]LogCollectionManager: Loaded 0 collections in 0.002405 seconds
[2022.04.17-08.09.09:005][  0]LogFileCache: Scanning file cache for directory 'C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Saved/Collections/' took 0.00s
[2022.04.17-08.09.09:005][  0]LogFileCache: Scanning file cache for directory 'C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Content/Developers/Admin/Collections/' took 0.00s
[2022.04.17-08.09.09:005][  0]LogFileCache: Scanning file cache for directory 'C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Content/Collections/' took 0.00s
[2022.04.17-08.09.09:222][  0]LogEngine: Initializing Engine...
[2022.04.17-08.09.09:232][  0]LogStylusInput: Initializing StylusInput subsystem.
[2022.04.17-08.09.09:233][  0]LogStats: UGameplayTagsManager::InitializeManager -  0.000 s
[2022.04.17-08.09.09:423][  0]LogInit: Initializing FReadOnlyCVARCache
[2022.04.17-08.09.09:423][  0]LogSubsystemCollection: Failed to initialize subsystem dependency (WorldPartitionSubsystem)
[2022.04.17-08.09.09:432][  0]LogChaos: FPhysicsSolverBase::AsyncDt:-1.000000
[2022.04.17-08.09.09:454][  0]LogAIModule: Creating AISystem for world Untitled
[2022.04.17-08.09.09:454][  0]LogAudio: Display: Initializing Audio Device Manager...
[2022.04.17-08.09.09:470][  0]LogAudio: Display: Loading Default Audio Settings Objects...
[2022.04.17-08.09.09:470][  0]LogAudio: Display: No default SoundConcurrencyObject specified (or failed to load).
[2022.04.17-08.09.09:470][  0]LogAudio: Display: Registering Engine Module Parameter Interfaces...
[2022.04.17-08.09.09:470][  0]LogAudio: Display: Audio Device Manager Initialized
[2022.04.17-08.09.09:470][  0]LogAudio: Display: Creating Audio Device:                 Id: 1, Scope: Shared, Realtime: True
[2022.04.17-08.09.09:470][  0]LogAudioMixer: Display: Audio Mixer Platform Settings:
[2022.04.17-08.09.09:470][  0]LogAudioMixer: Display: 	Sample Rate:						  48000
[2022.04.17-08.09.09:470][  0]LogAudioMixer: Display: 	Callback Buffer Frame Size Requested: 1024
[2022.04.17-08.09.09:470][  0]LogAudioMixer: Display: 	Callback Buffer Frame Size To Use:	  1024
[2022.04.17-08.09.09:470][  0]LogAudioMixer: Display: 	Number of buffers to queue:			  2
[2022.04.17-08.09.09:470][  0]LogAudioMixer: Display: 	Max Channels (voices):				  0
[2022.04.17-08.09.09:470][  0]LogAudioMixer: Display: 	Number of Async Source Workers:		  0
[2022.04.17-08.09.09:470][  0]LogAudio: Display: AudioDevice MaxSources: 32
[2022.04.17-08.09.09:471][  0]LogAudio: Display: Audio Spatialization Plugin: None (built-in).
[2022.04.17-08.09.09:471][  0]LogAudio: Display: Audio Reverb Plugin: None (built-in).
[2022.04.17-08.09.09:471][  0]LogAudio: Display: Audio Occlusion Plugin: None (built-in).
[2022.04.17-08.09.09:477][  0]LogAudioMixer: Display: Initializing audio mixer using platform API: 'XAudio2'
[2022.04.17-08.09.09:519][  0]LogAudioMixer: Display: Using Audio Hardware Device Speakers (Realtek(R) Audio)
[2022.04.17-08.09.09:519][  0]LogAudioMixer: Display: Initializing Sound Submixes...
[2022.04.17-08.09.09:521][  0]LogAudioMixer: Display: Creating Master Submix 'MasterSubmixDefault'
[2022.04.17-08.09.09:521][  0]LogAudioMixer: Display: Creating Master Submix 'MasterReverbSubmixDefault'
[2022.04.17-08.09.09:521][  0]LogAudioMixer: FMixerPlatformXAudio2::StartAudioStream() called. InstanceID=1
[2022.04.17-08.09.09:521][  0]LogAudioMixer: Display: Output buffers initialized: Frames=1024, Channels=2, Samples=2048, InstanceID=1
[2022.04.17-08.09.09:522][  0]LogAudioMixer: Display: Starting AudioMixerPlatformInterface::RunInternal(), InstanceID=1
[2022.04.17-08.09.09:522][  0]LogAudioMixer: Display: FMixerPlatformXAudio2::SubmitBuffer() called for the first time. InstanceID=1
[2022.04.17-08.09.09:522][  0]LogInit: FAudioDevice initialized.
[2022.04.17-08.09.09:522][  0]LogAudio: Display: Audio Device (ID: 1) registered with world 'Untitled'.
[2022.04.17-08.09.09:522][  0]LogNetVersion: Set ProjectVersion to 1.0.0.0. Version Checksum will be recalculated on next use.
[2022.04.17-08.09.09:522][  0]LogInit: Texture streaming: Enabled
[2022.04.17-08.09.09:548][  0]LogAnalytics: Display: [UEEditor.Rocket.Release] APIServer = https://datarouter.ol.epicgames.com/. AppVersion = 5.0.0-19505902+++UE5+Release-5.0
[2022.04.17-08.09.09:554][  0]LogEngineSessionManager: EngineSessionManager initialized
[2022.04.17-08.09.09:574][  0]LogCsvProfiler: Display: Metadata set : largeworldcoordinates="1"
[2022.04.17-08.09.09:580][  0]LogLiveCoding: Display: Starting LiveCoding
[2022.04.17-08.09.09:580][  0]LogLiveCoding: Display: LiveCodingConsole Arguments: EmptyUE5ProjectEditor Win64 Development
[2022.04.17-08.09.10:269][  0]LogLiveCoding: Display: First instance in process group "UE_EmptyUE5Project_0xce6c9972", spawning console
[2022.04.17-08.09.10:269][  0]LogLiveCoding: Display: Waiting for server
[2022.04.17-08.09.10:269][  0]LogLiveCoding: Display: Successfully initialized, removing startup thread
[2022.04.17-08.09.10:271][  0]LogInit: Transaction tracking system initialized
[2022.04.17-08.09.10:327][  0]BlueprintLog: New page: Editor Load
[2022.04.17-08.09.10:470][  0]LocalizationService: Localization service is disabled
[2022.04.17-08.09.10:505][  0]TimingProfiler: Initialize
[2022.04.17-08.09.10:506][  0]TimingProfiler: OnSessionChanged
[2022.04.17-08.09.10:506][  0]LoadingProfiler: Initialize
[2022.04.17-08.09.10:506][  0]LoadingProfiler: OnSessionChanged
[2022.04.17-08.09.10:506][  0]NetworkingProfiler: Initialize
[2022.04.17-08.09.10:506][  0]NetworkingProfiler: OnSessionChanged
[2022.04.17-08.09.10:506][  0]MemoryProfiler: Initialize
[2022.04.17-08.09.10:506][  0]MemoryProfiler: OnSessionChanged
[2022.04.17-08.09.10:959][  0]LogFileCache: Scanning file cache for directory 'C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Content/' took 0.00s
[2022.04.17-08.09.10:959][  0]LogLevelSequenceEditor: LevelSequenceEditor subsystem initialized.
[2022.04.17-08.09.11:035][  0]LogInit: Display: Engine is initialized. Leaving FEngineLoop::Init()
[2022.04.17-08.09.11:038][  0]SourceControl: Source control is disabled
[2022.04.17-08.09.11:038][  0]LogUnrealEdMisc: Loading editor; pre map load, took 7.039
[2022.04.17-08.09.11:038][  0]Cmd: MAP LOAD FILE="../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Content/Level.umap" TEMPLATE=0 SHOWPROGRESS=1 FEATURELEVEL=3
[2022.04.17-08.09.11:039][  0]LightingResults: New page: Lighting Build
[2022.04.17-08.09.11:044][  0]LogWorld: UWorld::CleanupWorld for Untitled, bSessionEnded=true, bCleanupResources=true
[2022.04.17-08.09.11:044][  0]LogSlate: InvalidateAllWidgets triggered.  All widgets were invalidated
[2022.04.17-08.09.11:044][  0]MapCheck: New page: Map Check
[2022.04.17-08.09.11:044][  0]LightingResults: New page: Lighting Build
[2022.04.17-08.09.11:048][  0]LogAudio: Display: Audio Device unregistered from world 'None'.
[2022.04.17-08.09.11:051][  0]LogUObjectHash: Compacting FUObjectHashTables data took   0.32ms
[2022.04.17-08.09.11:052][  0]LogAudio: Display: Audio Device (ID: 1) registered with world 'Level'.
[2022.04.17-08.09.11:052][  0]LogSubsystemCollection: Failed to initialize subsystem dependency (WorldPartitionSubsystem)
[2022.04.17-08.09.11:052][  0]LogChaos: FPhysicsSolverBase::AsyncDt:-1.000000
[2022.04.17-08.09.11:052][  0]LogAIModule: Creating AISystem for world Level
[2022.04.17-08.09.11:053][  0]LogEditorServer: Finished looking for orphan Actors (0.000 secs)
[2022.04.17-08.09.11:057][  0]LogUObjectHash: Compacting FUObjectHashTables data took   0.32ms
[2022.04.17-08.09.11:058][  0]Cmd: MAP CHECKDEP NOCLEARLOG
[2022.04.17-08.09.11:058][  0]MapCheck: Map check complete: 0 Error(s), 0 Warning(s), took 0.089ms to complete.
[2022.04.17-08.09.11:058][  0]LogFileHelpers: Loading map 'Level' took 0.019
[2022.04.17-08.09.11:067][  0]LogUnrealEdMisc: Total Editor Startup Time, took 7.068
[2022.04.17-08.09.11:067][  0]LogShaderCompilers: Display: ================================================
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: === FShaderJobCache stats ===
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: Total job queries 0, among them cache hits 0 (0.00%)
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: Tracking 0 distinct input hashes that result in 0 distinct outputs (0.00%)
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: RAM used: 0.00 MB (0.00 GB) of 1638.40 MB (1.60 GB) budget. Usage: 0.00%
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: === Shader Compilation stats ===
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: Shaders Compiled: 0
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: Jobs assigned 0, completed 0 (0.00%)
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: Time at least one job was in flight (either pending or executed): 0.00 s
[2022.04.17-08.09.11:068][  0]LogShaderCompilers: Display: ================================================
[2022.04.17-08.09.11:149][  0]LogSlate: Updating window title bar state: overlay mode, drag disabled, window buttons hidden, title bar hidden
[2022.04.17-08.09.11:152][  0]LogSlate: Updating window title bar state: overlay mode, drag disabled, window buttons hidden, title bar hidden
[2022.04.17-08.09.11:156][  0]LogSlate: Updating window title bar state: overlay mode, drag disabled, window buttons hidden, title bar hidden
[2022.04.17-08.09.11:159][  0]LogSlate: Updating window title bar state: overlay mode, drag disabled, window buttons hidden, title bar hidden
[2022.04.17-08.09.11:176][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/StarterContent.upack', mount point: 'root:/'
[2022.04.17-08.09.11:176][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:177][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_FirstPerson.upack', mount point: 'root:/'
[2022.04.17-08.09.11:177][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:177][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_FirstPersonBP.upack', mount point: 'root:/'
[2022.04.17-08.09.11:177][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:177][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_HandheldARBP.upack', mount point: 'root:/'
[2022.04.17-08.09.11:177][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:178][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_ThirdPerson.upack', mount point: 'root:/'
[2022.04.17-08.09.11:178][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:178][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_ThirdPersonBP.upack', mount point: 'root:/'
[2022.04.17-08.09.11:178][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:179][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_TopDown.upack', mount point: 'root:/'
[2022.04.17-08.09.11:179][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:179][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_TopDownBP.upack', mount point: 'root:/'
[2022.04.17-08.09.11:179][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:179][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_VehicleAdvBP.upack', mount point: 'root:/'
[2022.04.17-08.09.11:179][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:180][  0]LogPakFile: Display: Mounted Pak file 'C:/Program Files/Epic Games/UE_5.0/FeaturePacks/TP_VirtualRealityBP.upack', mount point: 'root:/'
[2022.04.17-08.09.11:180][  0]LogPakFile: Display: Mount point: 'root:/' is not mounted to a valid Root Path yet, assets in this pak file may not be accessible until a corresponding UFS Mount Point is added through FPackageName::RegisterMountPoint.
[2022.04.17-08.09.11:324][  0]LogSlate: Took 0.000116 seconds to synchronously load lazily loaded font '../../../Engine/Content/Slate/Fonts/Roboto-Regular.ttf' (155K)
[2022.04.17-08.09.11:326][  0]LogSlate: Took 0.000104 seconds to synchronously load lazily loaded font '../../../Engine/Content/Slate/Fonts/DroidSansMono.ttf' (77K)
[2022.04.17-08.09.11:345][  0]LogSlate: Took 0.000116 seconds to synchronously load lazily loaded font '../../../Engine/Content/Slate/Fonts/Roboto-Italic.ttf' (157K)
[2022.04.17-08.09.11:648][  0]LogStall: Startup...
[2022.04.17-08.09.11:649][  0]LogStall: Startup complete.
[2022.04.17-08.09.11:670][  0]LogLoad: (Engine Initialization) Total time: 7.67 seconds
[2022.04.17-08.09.11:670][  0]LogLoad: (Engine Initialization) Total Blueprint compile time: 0.00 seconds
[2022.04.17-08.09.11:716][  0]LogAssetRegistry: Asset discovery search completed in 5.1773 seconds
[2022.04.17-08.09.11:723][  0]LogCollectionManager: Fixed up redirectors for 0 collections in 0.000002 seconds (updated 0 objects)
[2022.04.17-08.09.11:740][  0]LogContentStreaming: Texture pool size now 1000 MB
[2022.04.17-08.09.11:763][  0]LogSlate: Took 0.000065 seconds to synchronously load lazily loaded font '../../../Engine/Content/Slate/Fonts/Roboto-Bold.ttf' (160K)
[2022.04.17-08.09.13:036][ 73]LogDebuggerCommands: Repeating last play command: Selected Viewport
[2022.04.17-08.09.13:039][ 73]LogPlayLevel: PlayLevel: No blueprints needed recompiling
[2022.04.17-08.09.13:040][ 73]PIE: New page: PIE session: Level (Apr 18, 2022, 2:09:13 AM)
[2022.04.17-08.09.13:042][ 73]LogOnline: OSS: Created online subsystem instance for: NULL
[2022.04.17-08.09.13:042][ 73]LogOnline: OSS: TryLoadSubsystemAndSetDefault: Loaded subsystem for module [NULL]
[2022.04.17-08.09.13:042][ 73]LogPlayLevel: Creating play world package: /Game/UEDPIE_0_Level
[2022.04.17-08.09.13:043][ 73]LogPlayLevel: PIE: StaticDuplicateObject took: (0.000699s)
[2022.04.17-08.09.13:043][ 73]LogPlayLevel: PIE: Created PIE world by copying editor world from /Game/Level.Level to /Game/UEDPIE_0_Level.Level (0.000753s)
[2022.04.17-08.09.13:043][ 73]LogSubsystemCollection: Failed to initialize subsystem dependency (WorldPartitionSubsystem)
[2022.04.17-08.09.13:043][ 73]LogChaos: FPhysicsSolverBase::AsyncDt:-1.000000
[2022.04.17-08.09.13:044][ 73]LogAIModule: Creating AISystem for world Level
[2022.04.17-08.09.13:044][ 73]LogPlayLevel: PIE: World Init took: (0.000635s)
[2022.04.17-08.09.13:048][ 73]LogUObjectHash: Compacting FUObjectHashTables data took   0.31ms
[2022.04.17-08.09.13:049][ 73]LogAudio: Display: Creating Audio Device:                 Id: 2, Scope: Unique, Realtime: True
[2022.04.17-08.09.13:049][ 73]LogAudioMixer: Display: Audio Mixer Platform Settings:
[2022.04.17-08.09.13:049][ 73]LogAudioMixer: Display: 	Sample Rate:						  48000
[2022.04.17-08.09.13:049][ 73]LogAudioMixer: Display: 	Callback Buffer Frame Size Requested: 1024
[2022.04.17-08.09.13:049][ 73]LogAudioMixer: Display: 	Callback Buffer Frame Size To Use:	  1024
[2022.04.17-08.09.13:049][ 73]LogAudioMixer: Display: 	Number of buffers to queue:			  2
[2022.04.17-08.09.13:049][ 73]LogAudioMixer: Display: 	Max Channels (voices):				  0
[2022.04.17-08.09.13:049][ 73]LogAudioMixer: Display: 	Number of Async Source Workers:		  0
[2022.04.17-08.09.13:049][ 73]LogAudio: Display: AudioDevice MaxSources: 32
[2022.04.17-08.09.13:049][ 73]LogAudio: Display: Audio Spatialization Plugin: None (built-in).
[2022.04.17-08.09.13:049][ 73]LogAudio: Display: Audio Reverb Plugin: None (built-in).
[2022.04.17-08.09.13:049][ 73]LogAudio: Display: Audio Occlusion Plugin: None (built-in).
[2022.04.17-08.09.13:050][ 73]LogAudioMixer: Display: Initializing audio mixer using platform API: 'XAudio2'
[2022.04.17-08.09.13:071][ 73]LogAudioMixer: Display: Using Audio Hardware Device Speakers (Realtek(R) Audio)
[2022.04.17-08.09.13:071][ 73]LogAudioMixer: Display: Initializing Sound Submixes...
[2022.04.17-08.09.13:071][ 73]LogAudioMixer: Display: Creating Master Submix 'MasterSubmixDefault'
[2022.04.17-08.09.13:071][ 73]LogAudioMixer: Display: Creating Master Submix 'MasterReverbSubmixDefault'
[2022.04.17-08.09.13:072][ 73]LogAudioMixer: FMixerPlatformXAudio2::StartAudioStream() called. InstanceID=2
[2022.04.17-08.09.13:072][ 73]LogAudioMixer: Display: Output buffers initialized: Frames=1024, Channels=2, Samples=2048, InstanceID=2
[2022.04.17-08.09.13:073][ 73]LogAudioMixer: Display: Starting AudioMixerPlatformInterface::RunInternal(), InstanceID=2
[2022.04.17-08.09.13:073][ 73]LogAudioMixer: Display: FMixerPlatformXAudio2::SubmitBuffer() called for the first time. InstanceID=2
[2022.04.17-08.09.13:073][ 73]LogInit: FAudioDevice initialized.
[2022.04.17-08.09.13:073][ 73]LogAudio: Display: Audio Device (ID: 2) registered with world 'Level'.
[2022.04.17-08.09.13:079][ 73]LogLoad: Game class is 'GameModeBase'
[2022.04.17-08.09.13:079][ 73]LogWorld: Bringing World /Game/UEDPIE_0_Level.Level up for play (max tick rate 0) at 2022.04.17-17.09.13
[2022.04.17-08.09.13:079][ 73]LogWorld: Bringing up level for play took: 0.000254
[2022.04.17-08.09.13:080][ 73]LogOnline: OSS: Created online subsystem instance for: :Context_1
[2022.04.17-08.09.13:089][ 73]LogTemp: Warning: Yo
[2022.04.17-08.09.13:090][ 73]PIE: Server logged in
[2022.04.17-08.09.13:090][ 73]PIE: Play in editor total start time 0.051 seconds.
[2022.04.17-08.09.14:609][144]LogSlate: Updating window title bar state: overlay mode, drag disabled, window buttons hidden, title bar hidden
[2022.04.17-08.09.14:609][144]LogWorld: BeginTearingDown for /Game/UEDPIE_0_Level
[2022.04.17-08.09.14:609][144]LogWorld: UWorld::CleanupWorld for Level, bSessionEnded=true, bCleanupResources=true
[2022.04.17-08.09.14:609][144]LogSlate: InvalidateAllWidgets triggered.  All widgets were invalidated
[2022.04.17-08.09.14:632][144]LogPlayLevel: Display: Shutting down PIE online subsystems
[2022.04.17-08.09.14:633][144]LogSlate: InvalidateAllWidgets triggered.  All widgets were invalidated
[2022.04.17-08.09.14:638][144]LogAudio: Display: Audio Device unregistered from world 'None'.
[2022.04.17-08.09.14:638][144]LogAudioMixer: FMixerPlatformXAudio2::StopAudioStream() called. InstanceID=2
[2022.04.17-08.09.14:639][144]LogAudioMixer: FMixerPlatformXAudio2::StopAudioStream() called. InstanceID=2
[2022.04.17-08.09.14:642][144]LogSlate: Updating window title bar state: overlay mode, drag disabled, window buttons hidden, title bar hidden
[2022.04.17-08.09.14:643][144]LogUObjectHash: Compacting FUObjectHashTables data took   0.32ms
[2022.04.17-08.09.14:705][148]LogPlayLevel: Display: Destroying online subsystem :Context_1
[2022.04.17-08.09.22:323][325]LogTurnkeySupport: Display: Adding device menu item for DESKTOP-VQR5I82
[2022.04.17-08.09.22:323][325]LogTurnkeySupport: Running Turnkey device detection: ' -ScriptsForProject="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" Turnkey -utf8output -WaitForUATMutex -command=VerifySdk -ReportFilename="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/TurnkeyReport_1.log" -log="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/TurnkeyLog_1.log" -project="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject"  -Device=Win64@DESKTOP-VQR5I82'
[2022.04.17-08.09.22:323][325]LogMonitoredProcess: Running Serialized UAT: [ cmd.exe /c ""C:/Program Files/Epic Games/UE_5.0/Engine/Build/BatchFiles/RunUAT.bat"  -ScriptsForProject="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" Turnkey -utf8output -WaitForUATMutex -command=VerifySdk -ReportFilename="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/TurnkeyReport_1.log" -log="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/TurnkeyLog_1.log" -project="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject"  -Device=Win64@DESKTOP-VQR5I82" -nocompile ]
[2022.04.17-08.09.22:842][345]LogTurnkeySupport: Completed device detection: Code = 0
[2022.04.17-08.09.22:871][346]LogTurnkeySupport: Turnkey Device: Win64@DESKTOP-VQR5I82: (Name=DESKTOP-VQR5I82, Status=Valid, Installed=10.0.19044.0, MinAllowed=10.0.18362.0, MaxAllowed=, Flags="Device_InstallSoftwareValid")
[2022.04.17-08.09.25:044][433]LogTurnkeySupport: Display: Adding device menu item for DESKTOP-VQR5I82
[2022.04.17-08.09.27:804][518]LogUObjectHash: Compacting FUObjectHashTables data took   0.31ms
[2022.04.17-08.10.10:333][518]LogTurnkeySupport: Selected target: EmptyUE5Project
[2022.04.17-08.10.10:333][518]LogLauncherProfile: Unable to use promoted target - ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Binaries/Win64/EmptyUE5Project.target does not exist.
[2022.04.17-08.10.10:359][518]LogMonitoredProcess: Running Serialized UAT: [ cmd.exe /c ""C:/Program Files/Epic Games/UE_5.0/Engine/Build/BatchFiles/RunUAT.bat" -ScriptsForProject="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" Turnkey -command=VerifySdk -platform=Win64 -UpdateIfNeeded -EditorIO -EditorIOPort=52630  -project="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" BuildCookRun -nop4 -utf8output -nocompileeditor -skipbuildeditor -cook  -project="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" -target=EmptyUE5Project  -unrealexe="C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" -platform=Win64 -ddc=InstalledDerivedDataBackendGraph -installed -stage -archive -package -build -compressed -iostore -pak -prereqs -archivedirectory="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Saved/TestBuildDev" -clientconfig=Development" -nocompile ]
[2022.04.17-08.10.10:395][518]UATHelper: Packaging (Windows): Running AutomationTool...
[2022.04.17-08.10.10:552][528]UATHelper: Packaging (Windows): Parsing command line: -ScriptsForProject="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" Turnkey -command=VerifySdk -platform=Win64 -UpdateIfNeeded -EditorIO -EditorIOPort=52630 -project="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" BuildCookRun -nop4 -utf8output -nocompileeditor -skipbuildeditor -cook -project="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/EmptyUE5Project.uproject" -target=EmptyUE5Project -unrealexe="C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" -platform=Win64 -ddc=InstalledDerivedDataBackendGraph -installed -stage -archive -package -build -compressed -iostore -pak -prereqs -archivedirectory="C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Saved/TestBuildDev" -clientconfig=Development -nocompile
[2022.04.17-08.10.10:741][541]UATHelper: Packaging (Windows): Log location: C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\Log.txt
[2022.04.17-08.10.10:899][552]UATHelper: Packaging (Windows): Installed Sdk validity:
[2022.04.17-08.10.10:899][552]UATHelper: Packaging (Windows): Win64: (Status=Valid, Installed=10.0.19041.0, AutoSDK=, MinAllowed=10.0.00000.0, MaxAllowed=10.9.99999.0, Flags="InstalledSdk_ValidVersionExists")
[2022.04.17-08.10.10:909][553]UATHelper: Packaging (Windows): Scanning for envvar changes...
[2022.04.17-08.10.10:909][553]UATHelper: Packaging (Windows): ... done! 
[2022.04.17-08.10.10:909][553]UATHelper: Packaging (Windows): Cleaning Temp Paths...
[2022.04.17-08.10.10:909][553]UATHelper: Packaging (Windows): BUILD SUCCESSFUL
[2022.04.17-08.10.10:909][553]UATHelper: Packaging (Windows): Setting up ProjectParams for C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject
[2022.04.17-08.10.11:981][628]UATHelper: Packaging (Windows): ********** BUILD COMMAND STARTED **********
[2022.04.17-08.10.11:991][629]UATHelper: Packaging (Windows): Running: C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\DotNET\UnrealBuildTool\UnrealBuildTool.exe EmptyUE5Project Win64 Development -Project="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject"  "C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject" -NoUBTMakefiles  -remoteini="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project" -skipdeploy -Manifest="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Intermediate\Build\Manifest.xml" -NoHotReload -log="C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\UBT-EmptyUE5Project-Win64-Development.txt"
[2022.04.17-08.10.12:169][642]UATHelper: Packaging (Windows): Log file: C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\UBT-EmptyUE5Project-Win64-Development.txt
[2022.04.17-08.10.12:264][648]UATHelper: Packaging (Windows): Using 'git status' to determine working set for adaptive non-unity build (C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project).
[2022.04.17-08.10.12:842][689]UATHelper: Packaging (Windows): Parsing headers for EmptyUE5Project
[2022.04.17-08.10.12:864][691]UATHelper: Packaging (Windows):   Running UnrealHeaderTool "C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject" "C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Intermediate\Build\Win64\EmptyUE5Project\Development\EmptyUE5Project.uhtmanifest" -LogCmds="loginit warning, logexit warning, logdatabase error" -Unattended -WarningsAsErrors -abslog="C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\UHT-EmptyUE5Project-Win64-Development.txt" -installed
[2022.04.17-08.10.13:756][754]UATHelper: Packaging (Windows): Reflection code generated for EmptyUE5Project in 0.8983808 seconds
[2022.04.17-08.10.13:965][768]UATHelper: Packaging (Windows): Writing manifest to C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Intermediate\Build\Manifest.xml
[2022.04.17-08.10.14:007][771]UATHelper: Packaging (Windows): Building EmptyUE5Project...
[2022.04.17-08.10.14:007][771]UATHelper: Packaging (Windows): Using Visual Studio 2019 14.29.30136 toolchain (C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133) and Windows 10.0.19041.0 SDK (C:\Program Files (x86)\Windows Kits\10).
[2022.04.17-08.10.14:007][771]UATHelper: Packaging (Windows): [Adaptive Build] Excluded from EmptyUE5Project unity file: EmptyUE5Project.cpp, EmptyUE5ProjectGameModeBase.cpp, MyActor.cpp
[2022.04.17-08.10.14:007][771]UATHelper: Packaging (Windows): [Adaptive Build] Excluded from Foo unity file: FooModule.cpp
[2022.04.17-08.10.14:017][772]UATHelper: Packaging (Windows): Determining max actions to execute in parallel (12 physical cores, 24 logical cores)
[2022.04.17-08.10.14:017][772]UATHelper: Packaging (Windows):   Executing up to 12 processes, one per physical core
[2022.04.17-08.10.14:017][772]UATHelper: Packaging (Windows):   Requested 1.5 GB free memory per action, 9.26 GB available: limiting max parallel actions to 6
[2022.04.17-08.10.14:017][772]UATHelper: Packaging (Windows): Building 16 actions with 6 processes...
[2022.04.17-08.10.14:101][778]UATHelper: Packaging (Windows): [1/16] Copy tbb12.dll
[2022.04.17-08.10.14:101][778]UATHelper: Packaging (Windows): [2/16] Copy D3D12Core.dll
[2022.04.17-08.10.14:101][778]UATHelper: Packaging (Windows): [3/16] Copy tbb.dll
[2022.04.17-08.10.14:101][778]UATHelper: Packaging (Windows): [4/16] Resource Default.rc2
[2022.04.17-08.10.14:112][779]UATHelper: Packaging (Windows): [5/16] Copy OpenImageDenoise.dll
[2022.04.17-08.10.14:143][781]UATHelper: Packaging (Windows): [6/16] Copy d3d12SDKLayers.dll
[2022.04.17-08.10.38:715][513]UATHelper: Packaging (Windows): [7/16] Compile SharedPCH.Engine.ShadowErrors.cpp
[2022.04.17-08.10.39:125][542]UATHelper: Packaging (Windows): [8/16] Compile EmptyUE5Project.init.gen.cpp
[2022.04.17-08.10.39:240][550]UATHelper: Packaging (Windows): [9/16] Compile MyActor.cpp
[2022.04.17-08.10.39:324][556]UATHelper: Packaging (Windows): [10/16] Compile MyActor.gen.cpp
[2022.04.17-08.10.39:398][561]UATHelper: Packaging (Windows): [11/16] Compile EmptyUE5ProjectGameModeBase.cpp
[2022.04.17-08.10.39:429][563]UATHelper: Packaging (Windows): [12/16] Compile FooModule.cpp
[2022.04.17-08.10.39:429][563]UATHelper: Packaging (Windows): [13/16] Compile EmptyUE5ProjectGameModeBase.gen.cpp
[2022.04.17-08.10.39:524][570]UATHelper: Packaging (Windows): [14/16] Compile EmptyUE5Project.cpp
[2022.04.17-08.10.44:311][908]UATHelper: Packaging (Windows): [15/16] Link EmptyUE5Project.exe
[2022.04.17-08.10.44:311][908]UATHelper: Packaging (Windows):    Creating library C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Binaries\Win64\EmptyUE5Project.lib and object C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Binaries\Win64\EmptyUE5Project.exp
[2022.04.17-08.10.44:447][917]UATHelper: Packaging (Windows): [16/16] WriteMetadata EmptyUE5Project.target
[2022.04.17-08.10.44:447][917]UATHelper: Packaging (Windows): Total time in Parallel executor: 30.43 seconds
[2022.04.17-08.10.44:468][919]UATHelper: Packaging (Windows): Total execution time: 32.43 seconds
[2022.04.17-08.10.44:489][920]UATHelper: Packaging (Windows): Took 32.4991192s to run UnrealBuildTool.exe, ExitCode=0
[2022.04.17-08.10.44:489][920]UATHelper: Packaging (Windows): ********** BUILD COMMAND COMPLETED **********
[2022.04.17-08.10.44:500][921]UATHelper: Packaging (Windows): ********** COOK COMMAND STARTED **********
[2022.04.17-08.10.44:500][921]UATHelper: Packaging (Windows): Running UnrealEditor Cook for project C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject
[2022.04.17-08.10.44:500][921]UATHelper: Packaging (Windows): Commandlet log file is C:\Program Files\Epic Games\UE_5.0\Engine\Programs\AutomationTool\Saved\Cook-2022.04.17-17.10.44.txt
[2022.04.17-08.10.44:500][921]UATHelper: Packaging (Windows): Running: C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\Win64\UnrealEditor-Cmd.exe "C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject" -run=Cook  -TargetPlatform=Windows -fileopenlog -ddc=InstalledDerivedDataBackendGraph -unversioned -abslog="C:\Program Files\Epic Games\UE_5.0\Engine\Programs\AutomationTool\Saved\Cook-2022.04.17-17.10.44.txt" -stdout -CrashForUAT -unattended -NoLogTimes  -UTF8Output
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogConsoleResponse: Display: Failed to find resolution value strings in scalability ini. Falling back to default.
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogConsoleResponse: Display: Failed to find resolution value strings in scalability ini. Falling back to default.
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogInit: Display: Running engine for game: EmptyUE5Project
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : platform="Windows"
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : config="Development"
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : buildversion="++UE5+Release-5.0-CL-19505902"
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : engineversion="5.0.0-19505902+++UE5+Release-5.0"
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : commandline="" "C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject" -run=Cook -TargetPlatform=Windows -fileopenlog -ddc=InstalledDerivedDataBackendGraph -unversioned -abslog="C:\Program Files\Epic Games\UE_5.0\Engine\Programs\AutomationTool\Saved\Cook-2022.04.17-17.10.44.txt" -stdout -CrashForUAT -unattended -NoLogTimes -UTF8Output""
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : os="Windows 10 (21H2) "
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : cpu="AuthenticAMD|AMD Ryzen 9 5900X 12-Core Processor"
[2022.04.17-08.10.44:878][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : pgoenabled="0"
[2022.04.17-08.10.44:879][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : loginid="c77ccc4b4162244dac67c8bf462e6de3"
[2022.04.17-08.10.44:879][948]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : llm="0"
[2022.04.17-08.10.45:205][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading VulkanPC ini files took 0.03 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading HoloLens ini files took 0.03 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading Mac ini files took 0.03 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading IOS ini files took 0.03 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading Android ini files took 0.03 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading TVOS ini files took 0.04 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading Unix ini files took 0.04 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading Windows ini files took 0.04 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading LinuxArm64 ini files took 0.04 seconds
[2022.04.17-08.10.45:214][971]UATHelper: Packaging (Windows): LogConfig: Display: Loading Linux ini files took 0.05 seconds
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Bridge/Content/' mounted to '/Bridge/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Animation/ControlRig/Content/' mounted to '/ControlRig/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Animation/IKRig/Content/' mounted to '/IKRig/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/2D/Paper2D/Content/' mounted to '/Paper2D/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Animation/ControlRigSpline/Content/' mounted to '/ControlRigSpline/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Developer/AnimationSharing/Content/' mounted to '/AnimationSharing/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Editor/ModelingToolsEditorMode/Content/' mounted to '/ModelingToolsEditorMode/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Editor/GeometryMode/Content/' mounted to '/GeometryMode/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Editor/SpeedTreeImporter/Content/' mounted to '/SpeedTreeImporter/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Enterprise/DatasmithContent/Content/' mounted to '/DatasmithContent/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/FX/Niagara/Content/' mounted to '/Niagara/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/ChaosClothEditor/Content/' mounted to '/ChaosClothEditor/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/ChaosSolverPlugin/Content/' mounted to '/ChaosSolverPlugin/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/ChaosNiagara/Content/' mounted to '/ChaosNiagara/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/FullBodyIK/Content/' mounted to '/FullBodyIK/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Media/MediaCompositing/Content/' mounted to '/MediaCompositing/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/MovieScene/SequencerScripting/Content/' mounted to '/SequencerScripting/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/GeometryFlow/Content/' mounted to '/GeometryFlow/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/MeshLODToolset/Content/' mounted to '/MeshLODToolset/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/MeshModelingToolsetExp/Content/' mounted to '/MeshModelingToolsetExp/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/PythonScriptPlugin/Content/' mounted to '/PythonScriptPlugin/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/AudioSynesthesia/Content/' mounted to '/AudioSynesthesia/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/GeometryProcessing/Content/' mounted to '/GeometryProcessing/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Experimental/GeometryCollectionPlugin/Content/' mounted to '/GeometryCollectionPlugin/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/HairStrands/Content/' mounted to '/HairStrands/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/MeshModelingToolset/Content/' mounted to '/MeshModelingToolset/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/ResonanceAudio/Content/' mounted to '/ResonanceAudio/'
[2022.04.17-08.10.45:392][984]UATHelper: Packaging (Windows): LogPackageName: Display: FPackageName: Mount point added: '../../Plugins/Runtime/Synthesis/Content/' mounted to '/Synthesis/'
[2022.04.17-08.10.45:560][996]UATHelper: Packaging (Windows): LogHAL: Display: Platform has ~ 32 GB [34302398464 / 34359738368 / 32], which maps to Largest [LargestMinGB=32, LargerMinGB=12, DefaultMinGB=8, SmallerMinGB=6, SmallestMinGB=0)
[2022.04.17-08.10.45:560][996]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : extradevelopmentmemorymb="0"
[2022.04.17-08.10.45:581][997]UATHelper: Packaging (Windows): LogTextureFormatETC2: Display: ETC2 Texture loading DLL: TextureConverter.dll
[2022.04.17-08.10.45:581][997]UATHelper: Packaging (Windows): LogTextureFormatOodle: Display: Oodle Texture TFO init; latest sdk version = 2.9.5
[2022.04.17-08.10.45:581][997]UATHelper: Packaging (Windows): LogTextureFormatOodle: Display: Oodle Texture loading DLL: oo2tex_win64_2.9.5.dll
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_ASTC'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_DXT'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_ETC2'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'AndroidClient'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_ASTCClient'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_DXTClient'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_ETC2Client'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_Multi'
[2022.04.17-08.10.45:592][998]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Android_MultiClient'
[2022.04.17-08.10.45:603][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'HoloLens'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'HoloLensClient'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'IOS'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'IOSClient'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Linux'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxEditor'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxServer'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxClient'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxArm64'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxArm64Server'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'LinuxArm64Client'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'TVOS'
[2022.04.17-08.10.45:613][999]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'TVOSClient'
[2022.04.17-08.10.45:624][  0]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'Windows'
[2022.04.17-08.10.45:624][  0]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'WindowsEditor'
[2022.04.17-08.10.45:624][  0]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'WindowsServer'
[2022.04.17-08.10.45:624][  0]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Loaded TargetPlatform 'WindowsClient'
[2022.04.17-08.10.45:624][  0]UATHelper: Packaging (Windows): LogTargetPlatformManager: Display: Building Assets For Windows
[2022.04.17-08.10.45:624][  0]UATHelper: Packaging (Windows): LogAudioDebug: Display: Lib vorbis DLL was dynamically loaded.
[2022.04.17-08.10.45:928][ 22]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Compiling shader autogen file: ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/ShaderAutogen/PCD3D_SM5/AutogenShaderHeaders.ush
[2022.04.17-08.10.45:928][ 22]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Autogen file is unchanged, skipping write.
[2022.04.17-08.10.45:928][ 22]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Compiling shader autogen file: ../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Intermediate/ShaderAutogen/PCD3D_ES31/AutogenShaderHeaders.ush
[2022.04.17-08.10.45:928][ 22]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Autogen file is unchanged, skipping write.
[2022.04.17-08.10.45:949][ 23]UATHelper: Packaging (Windows): LogDerivedDataCache: Display: ../../../Engine/DerivedDataCache/Compressed.ddp: Opened pak cache for reading. (1091 MiB)
[2022.04.17-08.10.45:949][ 23]UATHelper: Packaging (Windows): LogDerivedDataCache: Display: Performance to C:/Users/Admin/AppData/Local/UnrealEngine/Common/DerivedDataCache: Latency=0.02ms. RandomReadSpeed=309.90MBs, RandomWriteSpeed=173.93MBs. Assigned SpeedClass 'Local'
[2022.04.17-08.10.45:959][ 24]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Using Local Shader Compiler with 21 workers.
[2022.04.17-08.10.46:548][ 65]UATHelper: Packaging (Windows): LogEditorDomain: Display: EditorDomain is Disabled
[2022.04.17-08.10.46:904][ 90]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : deviceprofile="WindowsEditor"
[2022.04.17-08.10.48:123][176]UATHelper: Packaging (Windows): LogAudioCaptureCore: Display: No Audio Capture implementations found. Audio input will be silent.
[2022.04.17-08.10.48:123][176]UATHelper: Packaging (Windows): LogAudioCaptureCore: Display: No Audio Capture implementations found. Audio input will be silent.
[2022.04.17-08.10.48:375][194]UATHelper: Packaging (Windows): LogCsvProfiler: Display: Metadata set : largeworldcoordinates="1"
[2022.04.17-08.10.48:543][206]UATHelper: Packaging (Windows): LogCook: Display: CookSettings for Memory: MemoryMaxUsedVirtual 0MiB, MemoryMaxUsedPhysical 16384MiB, MemoryMinFreeVirtual 0MiB, MemoryMinFreePhysical 1024MiB
[2022.04.17-08.10.48:543][206]UATHelper: Packaging (Windows): LogCook: Display: Mobile HDR setting 1
[2022.04.17-08.10.48:543][206]UATHelper: Packaging (Windows): LogCook: Display: Creating asset registry
[2022.04.17-08.10.48:585][209]UATHelper: Packaging (Windows): LogCook: Display: Discovering localized assets for cultures: en
[2022.04.17-08.10.48:585][209]UATHelper: Packaging (Windows): LogCook: Display: Unable to read previous cook inisettings for platform Windows invalidating cook
[2022.04.17-08.10.48:585][209]UATHelper: Packaging (Windows): LogCook: Display: Clearing all cooked content for platform Windows
[2022.04.17-08.10.48:627][212]UATHelper: Packaging (Windows): LogCook: Display: Sandbox cleanup took 0.043 seconds for platforms Windows
[2022.04.17-08.10.48:638][213]UATHelper: Packaging (Windows): LogCook: Display: Checking global shaders for platform Windows
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: ================================================
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: === FShaderJobCache stats ===
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Total job queries 0, among them cache hits 0 (0.00%)
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Tracking 0 distinct input hashes that result in 0 distinct outputs (0.00%)
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: RAM used: 0.00 MB (0.00 GB) of 1638.40 MB (1.60 GB) budget. Usage: 0.00%
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: === Shader Compilation stats ===
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Shaders Compiled: 0
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Jobs assigned 0, completed 0 (0.00%)
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Time at least one job was in flight (either pending or executed): 0.00 s
[2022.04.17-08.10.49:783][293]UATHelper: Packaging (Windows): LogShaderCompilers: Display: ================================================
[2022.04.17-08.10.49:825][296]UATHelper: Packaging (Windows): LogShaderLibrary: Display:
[2022.04.17-08.10.49:825][296]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Shader Library 'Global' (PCD3D_SM5) Stats:
[2022.04.17-08.10.49:825][296]UATHelper: Packaging (Windows): LogShaderLibrary: Display: =================
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Assets: 1, Unique Shadermaps: 352 (35200.00%)
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Total Shaders: 4120, Unique Shaders: 4106 (99.66%)
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Total Shader Size: 10.86mb, Unique Shaders Size: 10.86mb (99.96%)
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: === Extended info:
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Minimum number of shaders in shadermap: 1
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Median number of shaders in shadermap: 3
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Maximum number of shaders in shadermap: 369
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Number of shadermaps referencing top 10 most shared shaders:
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display:     4, 3, 2, 2, 2, 2, 2, 2, 2, 2
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Textual dump saved to '../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Saved/Shaders/PCD3D_SM5/ShaderDebug-Global-PCD3D_SM5/Dump.txt'
[2022.04.17-08.10.49:835][297]UATHelper: Packaging (Windows): LogShaderLibrary: Display: =================
[2022.04.17-08.10.50:066][313]UATHelper: Packaging (Windows): LogCook: Display: Cooked packages 0 Packages Remain 422 Total 422
[2022.04.17-08.10.50:066][313]UATHelper: Packaging (Windows): LogCook: Display: Cook Diagnostics: OpenFileHandles=179, VirtualMemory=788MiB
[2022.04.17-08.10.50:087][315]UATHelper: Packaging (Windows): LogTexture: Display: Texture Encode Speed: Final (cook).
[2022.04.17-08.10.50:108][316]UATHelper: Packaging (Windows): LogTexture: Display: Oodle Texture Encode Speed settings: Fast: RDO Off Lambda=0, Effort=Normal Final: RDO Off Lambda=0, Effort=Normal
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/Black_1x1_EXR_Texture_VT.Black_1x1_EXR_Texture_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/Black_1x1_EXR_Texture_VT.Black_1x1_EXR_Texture_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenNormalMap_VT.BaseFlattenNormalMap_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenNormalMap_VT.BaseFlattenNormalMap_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenLinearColor_VT.BaseFlattenLinearColor_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenLinearColor_VT.BaseFlattenLinearColor_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenGrayscaleMap_VT.BaseFlattenGrayscaleMap_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenGrayscaleMap_VT.BaseFlattenGrayscaleMap_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenEmissiveMap_VT.BaseFlattenEmissiveMap_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenEmissiveMap_VT.BaseFlattenEmissiveMap_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenDiffuseMap_VT.BaseFlattenDiffuseMap_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:234][325]UATHelper: Packaging (Windows): LogTexture: Display: /Engine/EngineMaterials/BaseFlattenDiffuseMap_VT.BaseFlattenDiffuseMap_VT is marked for virtual streaming but virtual texture streaming is not available.
[2022.04.17-08.10.50:591][350]UATHelper: Packaging (Windows): LogCook: Display: Cooked packages 254 Packages Remain 0 Total 254
[2022.04.17-08.10.50:591][350]UATHelper: Packaging (Windows): LogCook: Display: Cook Diagnostics: OpenFileHandles=259, VirtualMemory=842MiB
[2022.04.17-08.10.50:591][350]UATHelper: Packaging (Windows): LogCook: Display: Finishing up...
[2022.04.17-08.10.50:613][352]UATHelper: Packaging (Windows): LogAssetRegistryGenerator: Display: Saving asset registry v12.
[2022.04.17-08.10.50:633][353]UATHelper: Packaging (Windows): LogAssetRegistryGenerator: Display: Generated development asset registry C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Saved/Cooked/Windows/EmptyUE5Project/Metadata/DevelopmentAssetRegistry.bin num assets 256, size is 176.65kb
[2022.04.17-08.10.50:633][353]UATHelper: Packaging (Windows): LogAssetRegistryGenerator: Display: Generated asset registry num assets 249, size is 79.83kb
[2022.04.17-08.10.50:633][353]UATHelper: Packaging (Windows): LogAssetRegistryGenerator: Display: Done saving asset registry. Took 0.0 seconds.
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display:
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Shader Library 'EmptyUE5Project' (PCD3D_SM5) Stats:
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: =================
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Assets: 45, Unique Shadermaps: 42 (93.33%)
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Total Shaders: 1653, Unique Shaders: 1395 (84.39%)
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Total Shader Size: 3.77mb, Unique Shaders Size: 3.34mb (88.50%)
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: === Extended info:
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Minimum number of shaders in shadermap: 3
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Median number of shaders in shadermap: 11
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Maximum number of shaders in shadermap: 685
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Number of shadermaps referencing top 10 most shared shaders:
[2022.04.17-08.10.50:664][355]UATHelper: Packaging (Windows): LogShaderLibrary: Display:     19, 16, 8, 8, 7, 5, 5, 5, 4, 4
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Textual dump saved to '../../../../../../Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Saved/Shaders/PCD3D_SM5/ShaderDebug-EmptyUE5Project-PCD3D_SM5/Dump.txt'
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogShaderLibrary: Display: =================
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display: Finalize package store(s)...
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display: Done finalizing package store(s)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display: Cook by the book total time in tick 0.521681s total time 2.127422
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display: Peak Used virtual 904 MiB Peak Used physical 957 MiB
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display: Packages Cooked: 254, Packages Iteratively Skipped: 0, Total Packages: 254
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display: Hierarchy Timer Information:
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:   Root: 0.000s (0)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:     CleanSandbox: 0.043s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:     CollectFilesToCook: 0.220s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       CookModificationDelegate: 0.000s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:     PostLoadPackageFixup: 0.002s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:     GenerateLongPackageName: 0.000s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:     TickCookOnTheSide: 0.522s (6)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       PostLoadPackageFixup: 0.000s (335)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       LoadPackageForCooking: 0.046s (254)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       SavingPackages: 0.470s (32)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:         BeginPrepareSave: 0.068s (69)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:         PrecachePlatformDataForNextPackage: 0.260s (252)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:           BeginPrepareSave: 0.259s (185)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:         SaveCookedPackage: 0.121s (254)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:           GEditorSavePackage: 0.114s (254)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:             VerifyCanCookPackage: 0.001s (248)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:           TargetDomainDependencies: 0.000s (254)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:         ClearAllCachedCookedPlatformData: 0.001s (254)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:     SavingCurrentIniSettings: 0.010s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       ProcessingAccessedStrings: 0.001s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:     SavingAssetRegistry: 0.071s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       BuildChunkManifest: 0.017s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       SaveManifests: 0.000s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       SaveRealAssetRegistry: 0.017s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:       WriteCookerOpenOrder: 0.012s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display:     FinalizePackageStore: 0.003s (1)
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCook: Display: Done!
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogSavePackage: Display: Took 0.000121s to verify the EDL loading graph.
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Misc Cook Stats
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: ===============
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: NiagaraShader.Misc
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     ShadersCompiled=0
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: ShaderCompiler
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     BlockingTimeSec=0.000041
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     AsyncCompileTimeSec=0.000000
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     GlobalBeginCompileShaderTimeSec=0.000000
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     GlobalBeginCompileShaderCalls=0
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     ProcessAsyncResultsTimeSec=0.000049
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: GlobalShader.Misc
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     ShadersCompiled=0
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: MeshMaterial.Misc
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     ShadersCompiled=0
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: MaterialShader.Misc
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     ShadersCompiled=0
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: MaterialInstance
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     UpdateCachedExpressionDataSec=0.000111
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Material
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     UpdateCachedExpressionDataSec=0.001912
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Package.Load
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     NumInlineLoads=2
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     NumPreloadedDependencies=8
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     NumPackagesLoaded=196
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     LoadPackageTimeSec=0.393625
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Package.Save
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     NumPackagesIterativelySkipped=0
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     NumPackagesSaved=254
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     SavePackageTimeSec=0.109039
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     TagPackageExportsPresaveTimeSec=0.000000
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     TagPackageExportsTimeSec=0.000000
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     FullyLoadLoadersTimeSec=0.000000
[2022.04.17-08.10.50:676][356]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     ResetLoadersTimeSec=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     TagPackageExportsGetObjectsWithOuter=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     TagPackageExportsGetObjectsWithMarks=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     SerializeImportsTimeSec=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     SortExportsSeekfreeInnerTimeSec=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     SerializeExportsTimeSec=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     SerializeBulkDataTimeSec=0.001617
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     AsyncWriteTimeSec=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     MBWritten=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: CookOnTheFlyServer
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     PeakRequestQueueSize=254
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     PeakLoadQueueSize=160
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     PeakSaveQueueSize=55
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Package.DifferentPackagesSizeMBPerAsset
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Package.NumberOfDifferencesInPackagesPerAsset
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Package.PackageDifferencesSizeMBPerAsset
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Package.DiffTotal
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     NumberOfDifferentPackages=0
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     DifferentPackagesSizeMB=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     NumberOfDifferencesInPackages=0
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     PackageDifferencesSizeMB=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: UnversionedProperties
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     SavedStructs=0
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     SavedMB=0
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     EquivalentTaggedMB=0
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     CompressionRatio=-nan(ind)
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:     BitfieldWasteKB=0
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Cook Profile
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: ============
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0.CookWallTimeSec=6.021555
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 0.StartupWallTimeSec=3.890413
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1.CookByTheBookTimeSec=2.129682
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 0.StartCookByTheBookTimeSec=1.518022
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 0. 0.GameCookModificationDelegateTimeSec=0.000014
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 1.TickCookOnTheSideTimeSec=0.608634
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 1. 0.TickCookOnTheSideLoadPackagesTimeSec=0.046405
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 1. 1.TickCookOnTheSideSaveCookedPackageTimeSec=0.121409
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 1. 1. 0.TickCookOnTheSideResolveRedirectorsTimeSec=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 1. 2.TickCookOnTheSideBeginPrepareSaveTimeSec=0.327574
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 1. 3.TickCookOnTheSideFinishPrepareSaveTimeSec=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 2.TickLoopGCTimeSec=0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 3.TickLoopRecompileShaderRequestsTimeSec=0.000011
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 4.TickLoopShaderProcessAsyncResultsTimeSec=0.000011
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 5.TickLoopProcessDeferredCommandsTimeSec=0.000014
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 6.TickLoopTickCommandletStatsTimeSec=0.000003
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 7.TickLoopFlushRenderingCommandsTimeSec=0.000734
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 8.TargetPlatforms=Windows
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 9.CookProject=EmptyUE5Project
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:  0. 1. 10.CookCultures=
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display:
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: DDC Summary Stats
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: =================
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: BackEnd         =InstalledDerivedDataBackendGraph
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: HasLocalCache   =      true
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: HasSharedCache  =     false
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: HasCloudCache   =     false
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: HasZenCache     =     false
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: TotalGetHits    =       965
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: TotalGets       =       965
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: TotalGetHitPct  =  1.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: LocalGetHitPct  =  0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: SharedGetHitPct =  0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: CloudGetHitPct  =  0.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: OtherGetHitPct  =  1.000000
[2022.04.17-08.10.50:686][357]UATHelper: Packaging (Windows): LogCookCommandlet: Display: GetMissPct      =  0.000000
[2022.04.17-08.10.50:697][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: TotalPutHits    =         0
[2022.04.17-08.10.50:697][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: TotalPuts       =         0
[2022.04.17-08.10.50:697][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: TotalPutHitPct  =  0.000000
[2022.04.17-08.10.50:697][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: PutMissPct      =  0.000000
[2022.04.17-08.10.50:697][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display:
[2022.04.17-08.10.50:697][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: DDC Resource Stats
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: =======================================================================================================
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Asset Type                          Total Time (Sec)  GameThread Time (Sec)  Assets Built  MB Processed
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: ----------------------------------  ----------------  ---------------------  ------------  ------------
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: MaterialShader                                  0.18                   0.18             0          6.05
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Texture (Streaming)                             0.02                   0.00             0          6.55
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: PhysX (BodySetup)                               0.02                   0.01             0          3.99
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: StaticMesh                                      0.01                   0.00             0          3.17
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: GlobalShader                                    0.01                   0.01             0         13.12
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: DistanceField                                   0.01                   0.00             0          1.42
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: NavCollision                                    0.00                   0.00             0          0.05
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: CardRepresentation                              0.00                   0.00             0          0.03
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogCookCommandlet: Display: Texture (Inline)                                0.00                   0.00             0         45.89
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogPackageBuildDependencyTracker: Display: Package Accesses (144 referencing packages with a total of 631 unique accesses)
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogInit: Display:
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogInit: Display: Success - 0 error(s), 0 warning(s)
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): LogInit: Display:
[2022.04.17-08.10.50:698][358]UATHelper: Packaging (Windows): Execution of commandlet took:  2.14 seconds
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: ================================================
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: === FShaderJobCache stats ===
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Total job queries 0, among them cache hits 0 (0.00%)
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Tracking 0 distinct input hashes that result in 0 distinct outputs (0.00%)
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: RAM used: 0.00 MB (0.00 GB) of 1638.40 MB (1.60 GB) budget. Usage: 0.00%
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: === Shader Compilation stats ===
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Shaders Compiled: 0
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Jobs assigned 0, completed 0 (0.00%)
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: Time at least one job was in flight (either pending or executed): 0.00 s
[2022.04.17-08.10.50:905][372]UATHelper: Packaging (Windows): LogShaderCompilers: Display: ================================================
[2022.04.17-08.10.52:500][485]UATHelper: Packaging (Windows): Took 7.997333800000001s to run UnrealEditor-Cmd.exe, ExitCode=0
[2022.04.17-08.10.52:511][486]UATHelper: Packaging (Windows): ********** COOK COMMAND COMPLETED **********
[2022.04.17-08.10.52:511][486]UATHelper: Packaging (Windows): ********** STAGE COMMAND STARTED **********
[2022.04.17-08.10.52:554][489]UATHelper: Packaging (Windows): Creating Staging Manifest...
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\BaseEditor.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\BaseEditorKeyBindings.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\BaseEditorPerProjectUserSettings.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\BaseEditorSettings.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\BaseLightmass.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\BasePakFileRules.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\Category.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\Editor.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\EditorTutorials.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\Engine.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\Keywords.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\PortableObjectExport.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\PortableObjectImport.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\PropertyNames.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\RepairData.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\ToolTips.ini
[2022.04.17-08.10.52:563][489]UATHelper: Packaging (Windows): Excluding config file C:\Program Files\Epic Games\UE_5.0\Engine\Config\Localization\WordCount.ini
[2022.04.17-08.10.52:573][490]UATHelper: Packaging (Windows): Excluding config file C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Config\DefaultEditor.ini
[2022.04.17-08.10.52:615][493]UATHelper: Packaging (Windows): Cleaning Stage Directory: C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\StagedBuilds\Windows
[2022.04.17-08.10.52:615][493]UATHelper: Packaging (Windows): Creating pak using staging manifest.
[2022.04.17-08.10.52:700][499]UATHelper: Packaging (Windows): Using 0 pak order files:
[2022.04.17-08.10.52:700][499]UATHelper: Packaging (Windows): Executing 1 UnrealPak command...
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): Output from: "C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\EmptyUE5Project.uproject" "C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\StagedBuilds\Windows\EmptyUE5Project\Content\Paks\EmptyUE5Project-Windows.pak" -create="C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\PakList_EmptyUE5Project-Windows.txt" -cryptokeys="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows\EmptyUE5Project\Metadata\Crypto.json" -patchpaddingalign=2048 -platform=Windows -compressionformats=Oodle -compressmethod=Kraken -compresslevel=4  -multiprocess -abslog="C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\UnrealPak-EmptyUE5Project-Windows-2022.04.17-17.10.52.txt"
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Parsing crypto keys from a crypto key cache file
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Loading response file C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\PakList_EmptyUE5Project-Windows.txt
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Added 1306 entries to add to pak file.
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Collecting files to add to pak file...
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Collected 1306 files in 0.00s.
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Creating pak C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\StagedBuilds\Windows\EmptyUE5Project\Content\Paks\EmptyUE5Project-Windows.pak.
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: CompressionFormats in priority order: Oodle, Zlib
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Oodle enabled on 'NoPluginCompression' files
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogDerivedDataCache: Display: ../../../Engine/DerivedDataCache/Compressed.ddp: Opened pak cache for reading. (1091 MiB)
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogDerivedDataCache: Display: Performance to C:/Users/Admin/AppData/Local/UnrealEngine/Common/DerivedDataCache: Latency=0.00ms. RandomReadSpeed=999.00MBs, RandomWriteSpeed=999.00MBs. Assigned SpeedClass 'Local'
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): OodleDataCompression: Display: Oodle v2.9.5 format for pak/iostore with method=Kraken, level=4=Normal
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: CompressionFormat 0 [Oodle] : 248 files, 19529079 -> 7578921 bytes
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: CompressionFormat 1 [Zlib] : 0 files, 0 -> 0 bytes
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: CompressionFormat 2 [None] : 1058 files, 768708 -> 768708 bytes
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Added 1306 files, 8911322 bytes total, time 0.33s.
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: PrimaryIndex size: 17906 bytes
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: PathHashIndex size: 38484 bytes
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: FullDirectoryIndex size: 38608 bytes
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Compression summary: 38.81% of original size. Compressed Size 7578921 bytes, Original Size 19529079 bytes.
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: Encryption - DISABLED
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): LogPakFile: Display: UnrealPak executed in 0.368878 seconds
[2022.04.17-08.10.53:634][565]UATHelper: Packaging (Windows): UnrealPak terminated with exit code 0
[2022.04.17-08.10.53:644][565]UATHelper: Packaging (Windows): Running UnrealPak with arguments: -CreateGlobalContainer="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\StagedBuilds\Windows\EmptyUE5Project\Content\Paks\global.utoc" -CookedDirectory="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows" -PackageStoreManifest="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows\EmptyUE5Project\Metadata\packagestore.manifest" -Commands="C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\IoStoreCommands.txt" -ScriptObjects="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows\EmptyUE5Project\Metadata\scriptobjects.bin" -patchpaddingalign=2048 -compressionformats=Oodle -compressmethod=Kraken -compresslevel=4   -cryptokeys="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows\EmptyUE5Project\Metadata\Crypto.json" -compressionMinBytesSaved=1024 -compressionMinPercentSaved=5
[2022.04.17-08.10.53:644][565]UATHelper: Packaging (Windows): Running: C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\Win64\UnrealPak.exe -CreateGlobalContainer="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\StagedBuilds\Windows\EmptyUE5Project\Content\Paks\global.utoc" -CookedDirectory="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows" -PackageStoreManifest="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows\EmptyUE5Project\Metadata\packagestore.manifest" -Commands="C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\IoStoreCommands.txt" -ScriptObjects="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows\EmptyUE5Project\Metadata\scriptobjects.bin" -patchpaddingalign=2048 -compressionformats=Oodle -compressmethod=Kraken -compresslevel=4   -cryptokeys="C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows\EmptyUE5Project\Metadata\Crypto.json" -compressionMinBytesSaved=1024 -compressionMinPercentSaved=5
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: ==================== IoStore Utils ====================
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Parsing crypto keys from a crypto key cache file 'C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows\EmptyUE5Project\Metadata\Crypto.json'
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Container signing - DISABLED
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Directory index - ENABLED
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Using compression format 'Oodle'
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Using memory mapping alignment '16384'
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Using compression block size '65536'
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Using compression block alignment '2048'
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Using compression min bytes saved '1024'
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Using compression min percent saved '5'
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Using max partition size '0'
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Not using DDC for compression
[2022.04.17-08.10.54:127][599]UATHelper: Packaging (Windows): LogIoStore: Display: Using command list file: 'C:\Users\Admin\AppData\Roaming\Unreal Engine\AutomationTool\Logs\C+Program+Files+Epic+Games+UE_5.0\IoStoreCommands.txt'
[2022.04.17-08.10.54:149][601]UATHelper: Packaging (Windows): LogIoStore: Display: Searching for cooked assets in folder 'C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\Cooked\Windows'
[2022.04.17-08.10.54:158][602]UATHelper: Packaging (Windows): LogIoStore: Display: Found '589' files
[2022.04.17-08.10.54:158][602]UATHelper: Packaging (Windows): LogIoStore: Display: Creating container targets...
[2022.04.17-08.10.54:180][603]UATHelper: Packaging (Windows): LogDerivedDataCache: Display: ../../../Engine/DerivedDataCache/Compressed.ddp: Opened pak cache for reading. (1091 MiB)
[2022.04.17-08.10.54:180][603]UATHelper: Packaging (Windows): LogDerivedDataCache: Display: Performance to C:/Users/Admin/AppData/Local/UnrealEngine/Common/DerivedDataCache: Latency=0.00ms. RandomReadSpeed=999.00MBs, RandomWriteSpeed=999.00MBs. Assigned SpeedClass 'Local'
[2022.04.17-08.10.54:180][603]UATHelper: Packaging (Windows): OodleDataCompression: Display: Oodle v2.9.5 format for pak/iostore with method=Kraken, level=4=Normal
[2022.04.17-08.10.54:211][605]UATHelper: Packaging (Windows): LogIoStore: Display: Parsing packages...
[2022.04.17-08.10.54:211][605]UATHelper: Packaging (Windows): LogIoStore: Display: Reading package assets...
[2022.04.17-08.10.54:222][606]UATHelper: Packaging (Windows): LogIoStore: Display: Processing shader libraries...
[2022.04.17-08.10.54:222][606]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Created IoStoreShaderArchive header: shaders grouped in 82 groups (27 of them didn't need new indices), average uncompressed size 129260 bytes, min 508 bytes, max 849336 bytes (r.ShaderCodeLibrary.MaxShaderGroupSize=1048576)
[2022.04.17-08.10.54:464][622]UATHelper: Packaging (Windows): LogIoStore: Display: EmptyUE5Project(PCD3D_SM5): Recompressed 1395 shaders as 82 groups. Library size changed from 3419 KB (3.03 : 1 ratio) to 903 KB (11.45 : 1 ratio), 26.43% of previous.
[2022.04.17-08.10.54:464][622]UATHelper: Packaging (Windows): LogShaderLibrary: Display: Created IoStoreShaderArchive header: shaders grouped in 381 groups (152 of them didn't need new indices), average uncompressed size 122937 bytes, min 172 bytes, max 1015948 bytes (r.ShaderCodeLibrary.MaxShaderGroupSize=1048576)
[2022.04.17-08.10.55:262][673]UATHelper: Packaging (Windows): LogIoStore: Display: Global(PCD3D_SM5): Recompressed 4106 shaders as 381 groups. Library size changed from 11119 KB (4.11 : 1 ratio) to 3780 KB (12.10 : 1 ratio), 34.00% of previous.
[2022.04.17-08.10.55:262][673]UATHelper: Packaging (Windows): LogIoStore: Display: Processing redirects...
[2022.04.17-08.10.55:262][673]UATHelper: Packaging (Windows): LogIoStore: Display: Optimizing packages...
[2022.04.17-08.10.55:262][673]UATHelper: Packaging (Windows): LogIoStore: Display: Finalizing packages...
[2022.04.17-08.10.55:262][673]UATHelper: Packaging (Windows): LogIoStore: Display: Creating disk layout...
[2022.04.17-08.10.55:262][673]UATHelper: Packaging (Windows): LogIoStore: Display: Ordered 248 packages using fallback bundle order
[2022.04.17-08.10.55:273][674]UATHelper: Packaging (Windows): LogIoStore: Display: Serializing container(s)...
[2022.04.17-08.10.55:356][680]UATHelper: Packaging (Windows): LogIoStore: Display: global: Found perfect hashmap for 1 items.
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: EmptyUE5Project-Windows: Found perfect hashmap for 803 items.
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Calculating stats...
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: --------------------------------------------------- IoDispatcher --------------------------------------------------------
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Container                           Flags   TOC Size (KB)     TOC Entries       Size (MB)           Compressed (MB)
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: -------------------------------------------------------------------------------------------------------------------------
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: global                            -/-/-/-            0.49               1            1.55                         -
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: EmptyUE5Project-Windows           C/-/-/I           81.26             803           64.73      15.49 (76.07% Oodle)
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: TOTAL                                               81.75             804           66.28                         -
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: ** Flags: (C)ompressed / (E)ncrypted / (S)igned) / (I)ndexed) **
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Compression block padding:     0.45 MB
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: -------------------------------------------- Container Directory Index --------------------------------------------------
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Container                            Size (KB)
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: global                                    0.00
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: EmptyUE5Project-Windows                  16.31
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: ---------------------------------------------- Container Patch Report ---------------------------------------------------
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Container                         Total (count) Modified (count)    Added (count)    Modified (MB)       Added (MB)
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: global                                        1                0                0             0.00             0.00
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: EmptyUE5Project-Windows                     803                0              803             0.00            15.04
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: --------------------------------------------------- PackageStore (KB) ---------------------------------------------------
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Container                                Store Size             Packages            Localized
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: -------------------------------------------------------------------------------------------------------------------------
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: EmptyUE5Project-Windows                           8                  248                    0
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: TOTAL                                             8                  248                    0
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: --------------------------------------------------- PackageHeader (KB) --------------------------------------------------
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Container                             Header         Graph ExportBundleEntries     ImportMap     ExportMap       NameMap
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: -------------------------------------------------------------------------------------------------------------------------
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: EmptyUE5Project-Windows                  117             7             6            12            29            50
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: TOTAL                                    117             7             6            12            29            50
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Input:     52.74 MB UExp
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Input:      0.25 MB UAsset
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Input:       248 Packages
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Input:      3.69 MB for 381 Global shaders
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Input:      0.14 MB for 39 Shared shaders
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Input:      0.00 MB for 0 Unique shaders
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Input:      0.75 MB for 43 Inline shaders
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display:
[2022.04.17-08.10.55:367][680]UATHelper: Packaging (Windows): LogIoStore: Display: Output:      826 Export bundle entries
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogIoStore: Display: Output:      250 Export bundles
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogIoStore: Display: Output:        2 Internal export bundle arcs
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogIoStore: Display: Output:      186 External export bundle arcs
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogIoStore: Display: Output:     1557 Name map entries
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogIoStore: Display: Output:      185 Imported package entries
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogIoStore: Display: Output:      136 Packages without imports
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogIoStore: Display: Output:        0 Public runtime script objects
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogIoStore: Display: Output:     1.55 MB InitialLoadData
[2022.04.17-08.10.55:377][681]UATHelper: Packaging (Windows): LogPakFile: Display: UnrealPak executed in 1.239250 seconds
[2022.04.17-08.10.55:441][686]UATHelper: Packaging (Windows): Took 1.7962653s to run UnrealPak.exe, ExitCode=0
[2022.04.17-08.10.55:441][686]UATHelper: Packaging (Windows): Copying NonUFSFiles to staging directory: C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\StagedBuilds\Windows
[2022.04.17-08.10.55:660][701]UATHelper: Packaging (Windows): Copying DebugFiles to staging directory: C:\Users\Admin\Documents\Unreal Projects\EmptyUE5Project\Saved\StagedBuilds\Windows
[2022.04.17-08.10.55:797][711]UATHelper: Packaging (Windows): ********** STAGE COMMAND COMPLETED **********
[2022.04.17-08.10.55:797][711]UATHelper: Packaging (Windows): ********** PACKAGE COMMAND STARTED **********
[2022.04.17-08.10.55:797][711]UATHelper: Packaging (Windows): ********** PACKAGE COMMAND COMPLETED **********
[2022.04.17-08.10.55:809][712]UATHelper: Packaging (Windows): ********** ARCHIVE COMMAND STARTED **********
[2022.04.17-08.10.55:809][712]UATHelper: Packaging (Windows): Archiving to C:/Users/Admin/Documents/Unreal Projects/EmptyUE5Project/Saved/TestBuildDev
[2022.04.17-08.10.56:575][766]UATHelper: Packaging (Windows): ********** ARCHIVE COMMAND COMPLETED **********
[2022.04.17-08.10.56:575][766]UATHelper: Packaging (Windows): BUILD SUCCESSFUL
[2022.04.17-08.10.56:575][766]UATHelper: Packaging (Windows): AutomationTool executed for 0h 0m 46s
[2022.04.17-08.10.56:575][766]UATHelper: Packaging (Windows): AutomationTool exiting with ExitCode=0 (Success)
[2022.04.17-08.10.56:594][767]UATHelper: Packaging (Windows): Updating environment variables set by a Turnkey sub-process
[2022.04.17-08.10.56:594][767]UATHelper: Packaging (Windows): The system cannot find the path specified.
[2022.04.17-08.10.56:594][767]UATHelper: Packaging (Windows): The system cannot find the path specified.
[2022.04.17-08.11.08:734][236]LogDerivedDataCache: C:/Users/Admin/AppData/Local/UnrealEngine/Common/DerivedDataCache: Maintenance finished in +00:00:03.179 and deleted 0 file(s) with total size 0 MiB.
```
