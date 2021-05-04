#include "NativizedAssets.h"
#include "WB_Icon_Base__pf2787112053.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/Overlay.h"
#include "Runtime/UMG/Public/Components/OverlaySlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UWB_Icon_Base_C__pf2787112053::UWB_Icon_Base_C__pf2787112053(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__img_Icon__pf = nullptr;
	bpv__img_Icon_Base__pf = nullptr;
	bpv__img_Icon_Mask1__pf = nullptr;
	bpv__img_Icon_Mask2__pf = nullptr;
	bpv__img_Icon_Outline1__pf = nullptr;
	bpv__img_Icon_Outline2__pf = nullptr;
	bpv__Text_IconText__pf = nullptr;
	bpv__Icon__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__bBaseColor__pf = true;
	bpv__BaseColor__pf = FLinearColor(0.245000, 0.245000, 0.245000, 1.000000);
	bpv__bBaseMask__pf = true;
	bpv__BaseMaskColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__bOutline1__pf = true;
	bpv__Outline1_Color__pf = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__bContour__pf = true;
	bpv__Contour_Color__pf = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__bGlassMask__pf = true;
	bpv__GlassMask_Color__pf = FLinearColor(1.000000, 1.000000, 1.000000, 0.700000);
	bpv__GlassMaskxTypes__pfT = E__E_GlassMaskTypes__pf::NewEnumerator0;
	bpv__IconColor__pf = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__IconScale__pf = 1.000000f;
	bpv__Overall_Angle__pf = 0.000000f;
	bpv__IconBaseTypes__pf = E__E_IconBaseTypes__pf::NewEnumerator0;
	bpv__IconBaseSize__pf = E__E_Sizes__pf::NewEnumerator0;
	bpv__Custom_BaseIcon__pf = nullptr;
	bpv__Custom_Mask1__pf = nullptr;
	bpv__Custom_Mask2__pf = nullptr;
	bpv__Custom_Outline1__pf = nullptr;
	bpv__Custom_Outline2__pf = nullptr;
	bpv__Icon_Translation_X__pf = 0.000000f;
	bpv__Icon_Translation_Y__pf = 0.000000f;
	bpv__bUseIconText__pf = false;
	bpv__IconText__pf = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2733CB3F434C64659050D8919444B9B4]\", \"66CC74D84B73200DABAB8A8E621F7D35\", \"!\")")	);
	auto& __Local__0 = (*(AccessPrivateProperty<FLinearColor >(&(bpv__IconText_Color__pf), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__0 = FLinearColor(1.000000, 1.000000, 1.000000, 1.000000);
	bpv__IconTextFont__pf.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__IconTextFont__pf.OutlineSettings.bApplyOutlineToDropShadows = true;
	bpv__IconTextFont__pf.TypefaceFontName = FName(TEXT("Regular"));
	bpv__IconTextFont__pf.Size = 20;
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWB_Icon_Base_C__pf2787112053::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Icon_Base_C__pf2787112053::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/ProIconPack/UI/Enums/E_IconBaseTypes.E_IconBaseTypes")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/ProIconPack/UI/Enums/E_Sizes.E_Sizes")));
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/ProIconPack/UI/Enums/E_GlassMaskTypes.E_GlassMaskTypes")));
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UOverlay>(__Local__1, TEXT("Overlay_0"), (EObjectFlags)0x00280008);
	auto& __Local__3 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__2), UPanelWidget::__PPO__Slots() )));
	__Local__3 = TArray<UPanelSlot*> ();
	__Local__3.Reserve(7);
	auto __Local__4 = NewObject<UOverlaySlot>(__Local__2, TEXT("OverlaySlot_1"), (EObjectFlags)0x00280008);
	__Local__4->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__4->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__4->Parent = __Local__2;
	auto __Local__5 = NewObject<UImage>(__Local__1, TEXT("img_Icon_Base"), (EObjectFlags)0x00280008);
	__Local__5->Brush.ImageSize = FVector2D(64.000000, 64.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<UObject* >(&(__Local__5->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__6 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__5->Slot = __Local__4;
	__Local__4->Content = __Local__5;
	__Local__3.Add(__Local__4);
	auto __Local__7 = NewObject<UOverlaySlot>(__Local__2, TEXT("OverlaySlot_10"), (EObjectFlags)0x00280008);
	__Local__7->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__7->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__7->Parent = __Local__2;
	auto __Local__8 = NewObject<UImage>(__Local__1, TEXT("img_Icon_Mask1"), (EObjectFlags)0x00280008);
	__Local__8->Brush.ImageSize = FVector2D(64.000000, 64.000000);
	auto& __Local__9 = (*(AccessPrivateProperty<UObject* >(&(__Local__8->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__9 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__8->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__3.Add(__Local__7);
	auto __Local__10 = NewObject<UOverlaySlot>(__Local__2, TEXT("OverlaySlot_4"), (EObjectFlags)0x00280008);
	__Local__10->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__10->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__10->Parent = __Local__2;
	auto __Local__11 = NewObject<UImage>(__Local__1, TEXT("img_Icon_Outline1"), (EObjectFlags)0x00280008);
	__Local__11->Brush.ImageSize = FVector2D(64.000000, 64.000000);
	auto& __Local__12 = (*(AccessPrivateProperty<UObject* >(&(__Local__11->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__12 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__3.Add(__Local__10);
	auto __Local__13 = NewObject<UOverlaySlot>(__Local__2, TEXT("OverlaySlot_9"), (EObjectFlags)0x00280008);
	__Local__13->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__13->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__13->Parent = __Local__2;
	auto __Local__14 = NewObject<UImage>(__Local__1, TEXT("img_Icon_Outline2"), (EObjectFlags)0x00280008);
	__Local__14->Brush.ImageSize = FVector2D(64.000000, 64.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<UObject* >(&(__Local__14->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__15 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__3.Add(__Local__13);
	auto __Local__16 = NewObject<UOverlaySlot>(__Local__2, TEXT("OverlaySlot_6"), (EObjectFlags)0x00280008);
	__Local__16->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__16->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__16->Parent = __Local__2;
	auto __Local__17 = NewObject<UImage>(__Local__1, TEXT("img_Icon"), (EObjectFlags)0x00280008);
	__Local__17->Brush.ImageSize = FVector2D(64.000000, 64.000000);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__3.Add(__Local__16);
	auto __Local__18 = NewObject<UOverlaySlot>(__Local__2, TEXT("OverlaySlot_8"), (EObjectFlags)0x00280008);
	__Local__18->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__18->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__18->Parent = __Local__2;
	auto __Local__19 = NewObject<UTextBlock>(__Local__1, TEXT("Text_IconText"), (EObjectFlags)0x00280008);
	__Local__19->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[2733CB3F434C64659050D8919444B9B4]\", \"16EFDB584937BEE3C987AEBBC74072D0\", \"E\")")	);
	__Local__19->Slot = __Local__18;
	__Local__19->bIsVariable = true;
	__Local__18->Content = __Local__19;
	__Local__3.Add(__Local__18);
	auto __Local__20 = NewObject<UOverlaySlot>(__Local__2, TEXT("OverlaySlot_5"), (EObjectFlags)0x00280008);
	__Local__20->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__20->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__20->Parent = __Local__2;
	auto __Local__21 = NewObject<UImage>(__Local__1, TEXT("img_Icon_Mask2"), (EObjectFlags)0x00280008);
	__Local__21->Brush.ImageSize = FVector2D(64.000000, 64.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__21->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__3.Add(__Local__20);
	__Local__1->RootWidget = __Local__2;
}
PRAGMA_ENABLE_OPTIMIZATION
void UWB_Icon_Base_C__pf2787112053::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__23;
	SlotNames.Append(__Local__23);
}
void UWB_Icon_Base_C__pf2787112053::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__24;
	TArray<FDelegateRuntimeBinding>  __Local__25;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->MiscConvertedSubobjects[0]), __Local__24, __Local__25);
}
void UWB_Icon_Base_C__pf2787112053::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UWB_Icon_Base_C__pf2787112053::bpf__ExecuteUbergraph_WB_Icon_Base__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf{};
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue__pf(EForceInit::ForceInit);
	FVector2D bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				FVector2D  __Local__26 = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_SlateBrush_4__pf.ImageSize = ((::IsValid(bpv__img_Icon__pf)) ? (bpv__img_Icon__pf->Brush.ImageSize) : (__Local__26));
				auto __Local__28 = FMargin{};
				FMargin  __Local__27 = __Local__28;
				b0l__K2Node_MakeStruct_SlateBrush_4__pf.Margin = ((::IsValid(bpv__img_Icon__pf)) ? (bpv__img_Icon__pf->Brush.Margin) : (__Local__27));
				auto __Local__30 = FSlateColor{};
				FSlateColor  __Local__29 = __Local__30;
				b0l__K2Node_MakeStruct_SlateBrush_4__pf.TintColor = ((::IsValid(bpv__img_Icon__pf)) ? (bpv__img_Icon__pf->Brush.TintColor) : (__Local__29));
				(*(AccessPrivateProperty<UObject* >(&(b0l__K2Node_MakeStruct_SlateBrush_4__pf), FSlateBrush::__PPO__ResourceObject() ))) = bpv__Icon__pf;
				TEnumAsByte<ESlateBrushDrawType::Type>  __Local__31 = ESlateBrushDrawType::NoDrawType;
				b0l__K2Node_MakeStruct_SlateBrush_4__pf.DrawAs = ((::IsValid(bpv__img_Icon__pf)) ? (bpv__img_Icon__pf->Brush.DrawAs) : (__Local__31));
				TEnumAsByte<ESlateBrushTileType::Type>  __Local__32 = ESlateBrushTileType::NoTile;
				b0l__K2Node_MakeStruct_SlateBrush_4__pf.Tiling = ((::IsValid(bpv__img_Icon__pf)) ? (bpv__img_Icon__pf->Brush.Tiling) : (__Local__32));
				TEnumAsByte<ESlateBrushMirrorType::Type>  __Local__33 = ESlateBrushMirrorType::NoMirror;
				b0l__K2Node_MakeStruct_SlateBrush_4__pf.Mirroring = ((::IsValid(bpv__img_Icon__pf)) ? (bpv__img_Icon__pf->Brush.Mirroring) : (__Local__33));
				if(::IsValid(bpv__img_Icon__pf))
				{
					bpv__img_Icon__pf->SetBrush(b0l__K2Node_MakeStruct_SlateBrush_4__pf);
				}
			}
		case 3:
			{
				if(::IsValid(bpv__img_Icon__pf))
				{
					bpv__img_Icon__pf->UImage::SetColorAndOpacity(bpv__IconColor__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue__pf = UKismetMathLibrary::MakeVector2D(bpv__IconScale__pf, bpv__IconScale__pf);
				if(::IsValid(bpv__img_Icon__pf))
				{
					bpv__img_Icon__pf->UWidget::SetRenderScale(bpfv__CallFunc_MakeVector2D_ReturnValue__pf);
				}
			}
		case 5:
			{
				b0l__Temp_struct_Variable_4__pf = FLinearColor(0.000000,0.000000,0.000000,0.000000);
				b0l__Temp_bool_Variable_4__pf = bpv__bBaseColor__pf;
				if(::IsValid(bpv__img_Icon_Base__pf))
				{
					bpv__img_Icon_Base__pf->UImage::SetColorAndOpacity(TSwitchValue<bool , FLinearColor >(b0l__Temp_bool_Variable_4__pf, b0l__K2Node_Select_Default_23__pf, 2, TSwitchPair<bool , FLinearColor >(false, b0l__Temp_struct_Variable_4__pf), TSwitchPair<bool , FLinearColor >(true, bpv__BaseColor__pf)));
				}
			}
		case 6:
			{
				b0l__Temp_struct_Variable_2__pf = FLinearColor(0.000000,0.000000,0.000000,0.000000);
				b0l__Temp_bool_Variable_3__pf = bpv__bBaseMask__pf;
				if(::IsValid(bpv__img_Icon_Mask1__pf))
				{
					bpv__img_Icon_Mask1__pf->UImage::SetColorAndOpacity(TSwitchValue<bool , FLinearColor >(b0l__Temp_bool_Variable_3__pf, b0l__K2Node_Select_Default_18__pf, 2, TSwitchPair<bool , FLinearColor >(false, b0l__Temp_struct_Variable_2__pf), TSwitchPair<bool , FLinearColor >(true, bpv__BaseMaskColor__pf)));
				}
			}
		case 7:
			{
				b0l__Temp_struct_Variable_1__pf = FLinearColor(0.000000,0.000000,0.000000,0.000000);
				b0l__Temp_bool_Variable_1__pf = bpv__bOutline1__pf;
				if(::IsValid(bpv__img_Icon_Outline1__pf))
				{
					bpv__img_Icon_Outline1__pf->UImage::SetColorAndOpacity(TSwitchValue<bool , FLinearColor >(b0l__Temp_bool_Variable_1__pf, b0l__K2Node_Select_Default_19__pf, 2, TSwitchPair<bool , FLinearColor >(false, b0l__Temp_struct_Variable_1__pf), TSwitchPair<bool , FLinearColor >(true, bpv__Outline1_Color__pf)));
				}
			}
		case 8:
			{
				b0l__Temp_struct_Variable__pf = FLinearColor(0.000000,0.000000,0.000000,0.000000);
				b0l__Temp_bool_Variable__pf = bpv__bContour__pf;
				if(::IsValid(bpv__img_Icon_Outline2__pf))
				{
					bpv__img_Icon_Outline2__pf->UImage::SetColorAndOpacity(TSwitchValue<bool , FLinearColor >(b0l__Temp_bool_Variable__pf, b0l__K2Node_Select_Default_20__pf, 2, TSwitchPair<bool , FLinearColor >(false, b0l__Temp_struct_Variable__pf), TSwitchPair<bool , FLinearColor >(true, bpv__Contour_Color__pf)));
				}
			}
		case 9:
			{
				b0l__Temp_struct_Variable_3__pf = FLinearColor(0.000000,0.000000,0.000000,0.000000);
				b0l__Temp_bool_Variable_2__pf = bpv__bGlassMask__pf;
				if(::IsValid(bpv__img_Icon_Mask2__pf))
				{
					bpv__img_Icon_Mask2__pf->UImage::SetColorAndOpacity(TSwitchValue<bool , FLinearColor >(b0l__Temp_bool_Variable_2__pf, b0l__K2Node_Select_Default_21__pf, 2, TSwitchPair<bool , FLinearColor >(false, b0l__Temp_struct_Variable_3__pf), TSwitchPair<bool , FLinearColor >(true, bpv__GlassMask_Color__pf)));
				}
			}
		case 10:
			{
				b0l__Temp_object_Variable__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_1__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_2__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_3__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_4__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_5__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_6__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_7__pf = CastChecked<UObject>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_8__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_9__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_10__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_11__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_12__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_13__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_14__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_15__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
				b0l__Temp_byte_Variable__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_1__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_2__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_15__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_16__pf = bpv__IconBaseSize__pf;
				b0l__Temp_byte_Variable_17__pf = bpv__IconBaseSize__pf;
				b0l__Temp_byte_Variable_18__pf = bpv__GlassMaskxTypes__pfT;
				FVector2D  __Local__34 = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_SlateBrush_5__pf.ImageSize = ((::IsValid(bpv__img_Icon_Mask2__pf)) ? (bpv__img_Icon_Mask2__pf->Brush.ImageSize) : (__Local__34));
				auto __Local__36 = FMargin{};
				FMargin  __Local__35 = __Local__36;
				b0l__K2Node_MakeStruct_SlateBrush_5__pf.Margin = ((::IsValid(bpv__img_Icon_Mask2__pf)) ? (bpv__img_Icon_Mask2__pf->Brush.Margin) : (__Local__35));
				auto __Local__38 = FSlateColor{};
				FSlateColor  __Local__37 = __Local__38;
				b0l__K2Node_MakeStruct_SlateBrush_5__pf.TintColor = ((::IsValid(bpv__img_Icon_Mask2__pf)) ? (bpv__img_Icon_Mask2__pf->Brush.TintColor) : (__Local__37));
				(*(AccessPrivateProperty<UObject* >(&(b0l__K2Node_MakeStruct_SlateBrush_5__pf), FSlateBrush::__PPO__ResourceObject() ))) = TSwitchValue<E__E_GlassMaskTypes__pf , UObject* >(b0l__Temp_byte_Variable_18__pf, b0l__K2Node_Select_Default_22__pf, 2, TSwitchPair<E__E_GlassMaskTypes__pf , UObject* >(E__E_GlassMaskTypes__pf::NewEnumerator0, TSwitchValue<E__E_Sizes__pf , UObject* >(b0l__Temp_byte_Variable_17__pf, b0l__K2Node_Select_Default_5__pf, 2, TSwitchPair<E__E_Sizes__pf , UObject* >(E__E_Sizes__pf::NewEnumerator0, TSwitchValue<E__E_IconBaseTypes__pf , UObject* >(b0l__Temp_byte_Variable_15__pf, b0l__K2Node_Select_Default_3__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_3__pf), TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_2__pf), TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_1__pf), TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable__pf), TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator4, *(UObject**)(&(bpv__Custom_Mask2__pf))))), TSwitchPair<E__E_Sizes__pf , UObject* >(E__E_Sizes__pf::NewEnumerator1, *(UObject**)(&(TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_1__pf, b0l__K2Node_Select_Default_2__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_11__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_10__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_9__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_8__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_Mask2__pf))))))), TSwitchPair<E__E_GlassMaskTypes__pf , UObject* >(E__E_GlassMaskTypes__pf::NewEnumerator1, TSwitchValue<E__E_Sizes__pf , UObject* >(b0l__Temp_byte_Variable_16__pf, b0l__K2Node_Select_Default_4__pf, 2, TSwitchPair<E__E_Sizes__pf , UObject* >(E__E_Sizes__pf::NewEnumerator0, TSwitchValue<E__E_IconBaseTypes__pf , UObject* >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_7__pf), TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_6__pf), TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_5__pf), TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_4__pf), TSwitchPair<E__E_IconBaseTypes__pf , UObject* >(E__E_IconBaseTypes__pf::NewEnumerator4, *(UObject**)(&(bpv__Custom_Mask2__pf))))), TSwitchPair<E__E_Sizes__pf , UObject* >(E__E_Sizes__pf::NewEnumerator1, *(UObject**)(&(TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_2__pf, b0l__K2Node_Select_Default_1__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_15__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_14__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_13__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_12__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_Mask2__pf))))))));
				TEnumAsByte<ESlateBrushDrawType::Type>  __Local__39 = ESlateBrushDrawType::NoDrawType;
				b0l__K2Node_MakeStruct_SlateBrush_5__pf.DrawAs = ((::IsValid(bpv__img_Icon_Mask2__pf)) ? (bpv__img_Icon_Mask2__pf->Brush.DrawAs) : (__Local__39));
				TEnumAsByte<ESlateBrushTileType::Type>  __Local__40 = ESlateBrushTileType::NoTile;
				b0l__K2Node_MakeStruct_SlateBrush_5__pf.Tiling = ((::IsValid(bpv__img_Icon_Mask2__pf)) ? (bpv__img_Icon_Mask2__pf->Brush.Tiling) : (__Local__40));
				TEnumAsByte<ESlateBrushMirrorType::Type>  __Local__41 = ESlateBrushMirrorType::NoMirror;
				b0l__K2Node_MakeStruct_SlateBrush_5__pf.Mirroring = ((::IsValid(bpv__img_Icon_Mask2__pf)) ? (bpv__img_Icon_Mask2__pf->Brush.Mirroring) : (__Local__41));
				if(::IsValid(bpv__img_Icon_Mask2__pf))
				{
					bpv__img_Icon_Mask2__pf->SetBrush(b0l__K2Node_MakeStruct_SlateBrush_5__pf);
				}
			}
		case 11:
			{
				if(::IsValid(bpv__img_Icon_Base__pf))
				{
					bpv__img_Icon_Base__pf->UWidget::SetRenderTransformAngle(bpv__Overall_Angle__pf);
				}
				if(::IsValid(bpv__img_Icon_Mask1__pf))
				{
					bpv__img_Icon_Mask1__pf->UWidget::SetRenderTransformAngle(bpv__Overall_Angle__pf);
				}
				if(::IsValid(bpv__img_Icon_Mask2__pf))
				{
					bpv__img_Icon_Mask2__pf->UWidget::SetRenderTransformAngle(bpv__Overall_Angle__pf);
				}
				if(::IsValid(bpv__img_Icon_Outline1__pf))
				{
					bpv__img_Icon_Outline1__pf->UWidget::SetRenderTransformAngle(bpv__Overall_Angle__pf);
				}
				if(::IsValid(bpv__img_Icon_Outline2__pf))
				{
					bpv__img_Icon_Outline2__pf->UWidget::SetRenderTransformAngle(bpv__Overall_Angle__pf);
				}
			}
		case 12:
			{
				bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf = UKismetMathLibrary::MakeVector2D(bpv__Icon_Translation_X__pf, bpv__Icon_Translation_Y__pf);
				if(::IsValid(bpv__img_Icon__pf))
				{
					bpv__img_Icon__pf->UWidget::SetRenderTranslation(bpfv__CallFunc_MakeVector2D_ReturnValue_1__pf);
				}
			}
		case 13:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__Text_IconText__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				if (!bpv__bUseIconText__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 15:
			{
				if(::IsValid(bpv__Text_IconText__pf))
				{
					bpv__Text_IconText__pf->SetVisibility(ESlateVisibility::HitTestInvisible);
				}
			}
		case 16:
			{
				if(::IsValid(bpv__Text_IconText__pf))
				{
					bpv__Text_IconText__pf->SetText(bpv__IconText__pf);
				}
			}
		case 17:
			{
				if(::IsValid(bpv__Text_IconText__pf))
				{
					bpv__Text_IconText__pf->UWidget::SetRenderTransform(bpv__IconText_Transform__pf);
				}
			}
		case 18:
			{
				if(::IsValid(bpv__Text_IconText__pf))
				{
					bpv__Text_IconText__pf->UTextBlock::SetColorAndOpacity(bpv__IconText_Color__pf);
				}
			}
		case 19:
			{
				if(::IsValid(bpv__Text_IconText__pf))
				{
					bpv__Text_IconText__pf->UTextBlock::SetFont(bpv__IconTextFont__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				if(::IsValid(bpv__Text_IconText__pf))
				{
					bpv__Text_IconText__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpv__Overall_Angle__pf = -45.000000;
			}
		case 22:
			{
				__StateStack.Push(24);
			}
		case 23:
			{
				UKismetSystemLibrary::Delay(this, 0.050000, FLatentActionInfo(1, -651077914, TEXT("ExecuteUbergraph_WB_Icon_Base_0"), this));
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 24:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
			}
		case 25:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ByteByte(static_cast<uint8>(bpv__IconBaseTypes__pf), static_cast<uint8>(E__E_IconBaseTypes__pf::NewEnumerator1));
				if (!bpfv__CallFunc_EqualEqual_ByteByte_ReturnValue__pf)
				{
					__CurrentState = 27;
					break;
				}
				__CurrentState = 21;
				break;
			}
		case 27:
			{
				__StateStack.Push(28);
				__CurrentState = 23;
				break;
			}
		case 28:
			{
				__StateStack.Push(30);
			}
		case 29:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 33;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 31;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 32:
			{
				bpv__Overall_Angle__pf = bpv__Overall_Angle__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 34:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 35:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 36:
			{
				b0l__Temp_object_Variable_16__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_17__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_18__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_19__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_32__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_33__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_34__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_35__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
				b0l__Temp_byte_Variable_3__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_8__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_7__pf = bpv__IconBaseSize__pf;
				FVector2D  __Local__43 = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_SlateBrush__pf.ImageSize = ((::IsValid(bpv__img_Icon_Base__pf)) ? (bpv__img_Icon_Base__pf->Brush.ImageSize) : (__Local__43));
				auto __Local__45 = FMargin{};
				FMargin  __Local__44 = __Local__45;
				b0l__K2Node_MakeStruct_SlateBrush__pf.Margin = ((::IsValid(bpv__img_Icon_Base__pf)) ? (bpv__img_Icon_Base__pf->Brush.Margin) : (__Local__44));
				auto __Local__47 = FSlateColor{};
				FSlateColor  __Local__46 = __Local__47;
				b0l__K2Node_MakeStruct_SlateBrush__pf.TintColor = ((::IsValid(bpv__img_Icon_Base__pf)) ? (bpv__img_Icon_Base__pf->Brush.TintColor) : (__Local__46));
				(*(AccessPrivateProperty<UObject* >(&(b0l__K2Node_MakeStruct_SlateBrush__pf), FSlateBrush::__PPO__ResourceObject() ))) = TSwitchValue<E__E_Sizes__pf , UTexture2D* >(b0l__Temp_byte_Variable_7__pf, b0l__K2Node_Select_Default_8__pf, 2, TSwitchPair<E__E_Sizes__pf , UTexture2D* >(E__E_Sizes__pf::NewEnumerator0, TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_8__pf, b0l__K2Node_Select_Default_7__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_35__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_34__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_33__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_32__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_BaseIcon__pf))), TSwitchPair<E__E_Sizes__pf , UTexture2D* >(E__E_Sizes__pf::NewEnumerator1, TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_3__pf, b0l__K2Node_Select_Default_6__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_19__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_18__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_17__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_16__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_BaseIcon__pf))));
				TEnumAsByte<ESlateBrushDrawType::Type>  __Local__48 = ESlateBrushDrawType::NoDrawType;
				b0l__K2Node_MakeStruct_SlateBrush__pf.DrawAs = ((::IsValid(bpv__img_Icon_Base__pf)) ? (bpv__img_Icon_Base__pf->Brush.DrawAs) : (__Local__48));
				TEnumAsByte<ESlateBrushTileType::Type>  __Local__49 = ESlateBrushTileType::NoTile;
				b0l__K2Node_MakeStruct_SlateBrush__pf.Tiling = ((::IsValid(bpv__img_Icon_Base__pf)) ? (bpv__img_Icon_Base__pf->Brush.Tiling) : (__Local__49));
				TEnumAsByte<ESlateBrushMirrorType::Type>  __Local__50 = ESlateBrushMirrorType::NoMirror;
				b0l__K2Node_MakeStruct_SlateBrush__pf.Mirroring = ((::IsValid(bpv__img_Icon_Base__pf)) ? (bpv__img_Icon_Base__pf->Brush.Mirroring) : (__Local__50));
				if(::IsValid(bpv__img_Icon_Base__pf))
				{
					bpv__img_Icon_Base__pf->SetBrush(b0l__K2Node_MakeStruct_SlateBrush__pf);
				}
			}
		case 37:
			{
				b0l__Temp_object_Variable_20__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_21__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_22__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_23__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[25], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_36__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[26], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_37__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[27], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_38__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_39__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
				b0l__Temp_byte_Variable_4__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_12__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_9__pf = bpv__IconBaseSize__pf;
				FVector2D  __Local__51 = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_SlateBrush_1__pf.ImageSize = ((::IsValid(bpv__img_Icon_Mask1__pf)) ? (bpv__img_Icon_Mask1__pf->Brush.ImageSize) : (__Local__51));
				auto __Local__53 = FMargin{};
				FMargin  __Local__52 = __Local__53;
				b0l__K2Node_MakeStruct_SlateBrush_1__pf.Margin = ((::IsValid(bpv__img_Icon_Mask1__pf)) ? (bpv__img_Icon_Mask1__pf->Brush.Margin) : (__Local__52));
				auto __Local__55 = FSlateColor{};
				FSlateColor  __Local__54 = __Local__55;
				b0l__K2Node_MakeStruct_SlateBrush_1__pf.TintColor = ((::IsValid(bpv__img_Icon_Mask1__pf)) ? (bpv__img_Icon_Mask1__pf->Brush.TintColor) : (__Local__54));
				(*(AccessPrivateProperty<UObject* >(&(b0l__K2Node_MakeStruct_SlateBrush_1__pf), FSlateBrush::__PPO__ResourceObject() ))) = TSwitchValue<E__E_Sizes__pf , UTexture2D* >(b0l__Temp_byte_Variable_9__pf, b0l__K2Node_Select_Default_11__pf, 2, TSwitchPair<E__E_Sizes__pf , UTexture2D* >(E__E_Sizes__pf::NewEnumerator0, TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_12__pf, b0l__K2Node_Select_Default_10__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_39__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_38__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_37__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_36__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_Mask1__pf))), TSwitchPair<E__E_Sizes__pf , UTexture2D* >(E__E_Sizes__pf::NewEnumerator1, TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_4__pf, b0l__K2Node_Select_Default_9__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_23__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_22__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_21__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_20__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_Mask1__pf))));
				TEnumAsByte<ESlateBrushDrawType::Type>  __Local__56 = ESlateBrushDrawType::NoDrawType;
				b0l__K2Node_MakeStruct_SlateBrush_1__pf.DrawAs = ((::IsValid(bpv__img_Icon_Mask1__pf)) ? (bpv__img_Icon_Mask1__pf->Brush.DrawAs) : (__Local__56));
				TEnumAsByte<ESlateBrushTileType::Type>  __Local__57 = ESlateBrushTileType::NoTile;
				b0l__K2Node_MakeStruct_SlateBrush_1__pf.Tiling = ((::IsValid(bpv__img_Icon_Mask1__pf)) ? (bpv__img_Icon_Mask1__pf->Brush.Tiling) : (__Local__57));
				TEnumAsByte<ESlateBrushMirrorType::Type>  __Local__58 = ESlateBrushMirrorType::NoMirror;
				b0l__K2Node_MakeStruct_SlateBrush_1__pf.Mirroring = ((::IsValid(bpv__img_Icon_Mask1__pf)) ? (bpv__img_Icon_Mask1__pf->Brush.Mirroring) : (__Local__58));
				if(::IsValid(bpv__img_Icon_Mask1__pf))
				{
					bpv__img_Icon_Mask1__pf->SetBrush(b0l__K2Node_MakeStruct_SlateBrush_1__pf);
				}
			}
		case 38:
			{
				b0l__Temp_object_Variable_24__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[28], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_25__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[29], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_26__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_27__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[30], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_40__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[31], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_41__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[32], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_42__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_43__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
				b0l__Temp_byte_Variable_5__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_13__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_10__pf = bpv__IconBaseSize__pf;
				FVector2D  __Local__59 = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_SlateBrush_2__pf.ImageSize = ((::IsValid(bpv__img_Icon_Outline1__pf)) ? (bpv__img_Icon_Outline1__pf->Brush.ImageSize) : (__Local__59));
				auto __Local__61 = FMargin{};
				FMargin  __Local__60 = __Local__61;
				b0l__K2Node_MakeStruct_SlateBrush_2__pf.Margin = ((::IsValid(bpv__img_Icon_Outline1__pf)) ? (bpv__img_Icon_Outline1__pf->Brush.Margin) : (__Local__60));
				auto __Local__63 = FSlateColor{};
				FSlateColor  __Local__62 = __Local__63;
				b0l__K2Node_MakeStruct_SlateBrush_2__pf.TintColor = ((::IsValid(bpv__img_Icon_Outline1__pf)) ? (bpv__img_Icon_Outline1__pf->Brush.TintColor) : (__Local__62));
				(*(AccessPrivateProperty<UObject* >(&(b0l__K2Node_MakeStruct_SlateBrush_2__pf), FSlateBrush::__PPO__ResourceObject() ))) = TSwitchValue<E__E_Sizes__pf , UTexture2D* >(b0l__Temp_byte_Variable_10__pf, b0l__K2Node_Select_Default_14__pf, 2, TSwitchPair<E__E_Sizes__pf , UTexture2D* >(E__E_Sizes__pf::NewEnumerator0, TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_13__pf, b0l__K2Node_Select_Default_13__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_43__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_42__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_41__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_40__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_Outline1__pf))), TSwitchPair<E__E_Sizes__pf , UTexture2D* >(E__E_Sizes__pf::NewEnumerator1, TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_5__pf, b0l__K2Node_Select_Default_12__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_27__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_26__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_25__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_24__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_Outline1__pf))));
				TEnumAsByte<ESlateBrushDrawType::Type>  __Local__64 = ESlateBrushDrawType::NoDrawType;
				b0l__K2Node_MakeStruct_SlateBrush_2__pf.DrawAs = ((::IsValid(bpv__img_Icon_Outline1__pf)) ? (bpv__img_Icon_Outline1__pf->Brush.DrawAs) : (__Local__64));
				TEnumAsByte<ESlateBrushTileType::Type>  __Local__65 = ESlateBrushTileType::NoTile;
				b0l__K2Node_MakeStruct_SlateBrush_2__pf.Tiling = ((::IsValid(bpv__img_Icon_Outline1__pf)) ? (bpv__img_Icon_Outline1__pf->Brush.Tiling) : (__Local__65));
				TEnumAsByte<ESlateBrushMirrorType::Type>  __Local__66 = ESlateBrushMirrorType::NoMirror;
				b0l__K2Node_MakeStruct_SlateBrush_2__pf.Mirroring = ((::IsValid(bpv__img_Icon_Outline1__pf)) ? (bpv__img_Icon_Outline1__pf->Brush.Mirroring) : (__Local__66));
				if(::IsValid(bpv__img_Icon_Outline1__pf))
				{
					bpv__img_Icon_Outline1__pf->SetBrush(b0l__K2Node_MakeStruct_SlateBrush_2__pf);
				}
			}
		case 39:
			{
				b0l__Temp_object_Variable_28__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[33], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_29__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[34], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_30__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[35], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_31__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[35], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_44__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[36], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_45__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[37], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_46__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable_47__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UWB_Icon_Base_C__pf2787112053::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
				b0l__Temp_byte_Variable_6__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_14__pf = bpv__IconBaseTypes__pf;
				b0l__Temp_byte_Variable_11__pf = bpv__IconBaseSize__pf;
				FVector2D  __Local__67 = FVector2D(0.000000,0.000000);
				b0l__K2Node_MakeStruct_SlateBrush_3__pf.ImageSize = ((::IsValid(bpv__img_Icon_Outline2__pf)) ? (bpv__img_Icon_Outline2__pf->Brush.ImageSize) : (__Local__67));
				auto __Local__69 = FMargin{};
				FMargin  __Local__68 = __Local__69;
				b0l__K2Node_MakeStruct_SlateBrush_3__pf.Margin = ((::IsValid(bpv__img_Icon_Outline2__pf)) ? (bpv__img_Icon_Outline2__pf->Brush.Margin) : (__Local__68));
				auto __Local__71 = FSlateColor{};
				FSlateColor  __Local__70 = __Local__71;
				b0l__K2Node_MakeStruct_SlateBrush_3__pf.TintColor = ((::IsValid(bpv__img_Icon_Outline2__pf)) ? (bpv__img_Icon_Outline2__pf->Brush.TintColor) : (__Local__70));
				(*(AccessPrivateProperty<UObject* >(&(b0l__K2Node_MakeStruct_SlateBrush_3__pf), FSlateBrush::__PPO__ResourceObject() ))) = TSwitchValue<E__E_Sizes__pf , UTexture2D* >(b0l__Temp_byte_Variable_11__pf, b0l__K2Node_Select_Default_17__pf, 2, TSwitchPair<E__E_Sizes__pf , UTexture2D* >(E__E_Sizes__pf::NewEnumerator0, TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_14__pf, b0l__K2Node_Select_Default_16__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_47__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_46__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_45__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_44__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_Outline2__pf))), TSwitchPair<E__E_Sizes__pf , UTexture2D* >(E__E_Sizes__pf::NewEnumerator1, TSwitchValue<E__E_IconBaseTypes__pf , UTexture2D* >(b0l__Temp_byte_Variable_6__pf, b0l__K2Node_Select_Default_15__pf, 5, TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator0, b0l__Temp_object_Variable_31__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator1, b0l__Temp_object_Variable_30__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator2, b0l__Temp_object_Variable_29__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator3, b0l__Temp_object_Variable_28__pf), TSwitchPair<E__E_IconBaseTypes__pf , UTexture2D* >(E__E_IconBaseTypes__pf::NewEnumerator4, bpv__Custom_Outline2__pf))));
				TEnumAsByte<ESlateBrushDrawType::Type>  __Local__72 = ESlateBrushDrawType::NoDrawType;
				b0l__K2Node_MakeStruct_SlateBrush_3__pf.DrawAs = ((::IsValid(bpv__img_Icon_Outline2__pf)) ? (bpv__img_Icon_Outline2__pf->Brush.DrawAs) : (__Local__72));
				TEnumAsByte<ESlateBrushTileType::Type>  __Local__73 = ESlateBrushTileType::NoTile;
				b0l__K2Node_MakeStruct_SlateBrush_3__pf.Tiling = ((::IsValid(bpv__img_Icon_Outline2__pf)) ? (bpv__img_Icon_Outline2__pf->Brush.Tiling) : (__Local__73));
				TEnumAsByte<ESlateBrushMirrorType::Type>  __Local__74 = ESlateBrushMirrorType::NoMirror;
				b0l__K2Node_MakeStruct_SlateBrush_3__pf.Mirroring = ((::IsValid(bpv__img_Icon_Outline2__pf)) ? (bpv__img_Icon_Outline2__pf->Brush.Mirroring) : (__Local__74));
				if(::IsValid(bpv__img_Icon_Outline2__pf))
				{
					bpv__img_Icon_Outline2__pf->SetBrush(b0l__K2Node_MakeStruct_SlateBrush_3__pf);
				}
				__CurrentState = 26;
				break;
			}
		case 40:
			{
				__CurrentState = 36;
				break;
			}
		case 41:
			{
				__CurrentState = 36;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UWB_Icon_Base_C__pf2787112053::bpf__Update__pf()
{
	bpf__ExecuteUbergraph_WB_Icon_Base__pf_0(41);
}
void UWB_Icon_Base_C__pf2787112053::bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf)
{
	b0l__K2Node_Event_IsDesignTime__pf = bpp__IsDesignTime__pf;
	bpf__ExecuteUbergraph_WB_Icon_Base__pf_0(40);
}
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Icon_Base_C__pf2787112053::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{131, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Generic_Icons/64x64/T_ExclamationMark_64x64.T_ExclamationMark_64x64 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{132, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/64x64/T_Square_Base_64x64.T_Square_Base_64x64 
		{133, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/64x64/T_Square_Mask1_64x64.T_Square_Mask1_64x64 
		{134, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/64x64/T_Square_Outline1_64x64.T_Square_Outline1_64x64 
		{135, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/64x64/T_Square_Outline2_64x64.T_Square_Outline2_64x64 
		{136, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/64x64/T_Square_Glass1_64x64.T_Square_Glass1_64x64 
		{137, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/64x64/T_Hexa_Glass1_64x64.T_Hexa_Glass1_64x64 
		{138, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/64x64/T_Ellipse_Glass1_64x64.T_Ellipse_Glass1_64x64 
		{139, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/64x64/T_Hexa_Glass2_64x64.T_Hexa_Glass2_64x64 
		{140, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/64x64/T_Ellipse_Glass2_64x64.T_Ellipse_Glass2_64x64 
		{141, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/64x64/T_Square_Glass2_64x64.T_Square_Glass2_64x64 
		{142, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/256x256/T_Hexa_Glass1_256x256.T_Hexa_Glass1_256x256 
		{143, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/256x256/T_Ellipse_Glass1_256x256.T_Ellipse_Glass1_256x256 
		{144, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/256x256/T_Square_Glass1_256x256.T_Square_Glass1_256x256 
		{145, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/256x256/T_Hexa_Glass2_256x256.T_Hexa_Glass2_256x256 
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/256x256/T_Ellipse_Glass2_256x256.T_Ellipse_Glass2_256x256 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/256x256/T_Square_Glass2_256x256.T_Square_Glass2_256x256 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/256x256/T_Hexa_Base_256x256.T_Hexa_Base_256x256 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/256x256/T_Ellipse_Base_256x256.T_Ellipse_Base_256x256 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/256x256/T_Square_Base_256x256.T_Square_Base_256x256 
		{151, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/64x64/T_Hexa_Base_64x64.T_Hexa_Base_64x64 
		{152, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/64x64/T_Ellipse_Base_64x64.T_Ellipse_Base_64x64 
		{153, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/256x256/T_Hexa_Mask1_256x256.T_Hexa_Mask1_256x256 
		{154, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/256x256/T_Ellipse_Mask1_256x256.T_Ellipse_Mask1_256x256 
		{155, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/256x256/T_Square_Mask1_256x256.T_Square_Mask1_256x256 
		{156, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/64x64/T_Hexa_Mask1_64x64.T_Hexa_Mask1_64x64 
		{157, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/64x64/T_Ellipse_Mask1_64x64.T_Ellipse_Mask1_64x64 
		{158, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/256x256/T_Hexa_Outline1_256x256.T_Hexa_Outline1_256x256 
		{159, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/256x256/T_Ellipse_Outline1_256x256.T_Ellipse_Outline1_256x256 
		{160, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/256x256/T_Square_Outline1_256x256.T_Square_Outline1_256x256 
		{161, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/64x64/T_Hexa_Outline1_64x64.T_Hexa_Outline1_64x64 
		{162, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/64x64/T_Ellipse_Outline1_64x64.T_Ellipse_Outline1_64x64 
		{163, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/256x256/T_Hexa_Outline2_256x256.T_Hexa_Outline2_256x256 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/256x256/T_Ellipse_Outline2_256x256.T_Ellipse_Outline2_256x256 
		{164, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Square/256x256/T_Square_Outline2_256x256.T_Square_Outline2_256x256 
		{165, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Hexagon/64x64/T_Hexa_Outline2_64x64.T_Hexa_Outline2_64x64 
		{166, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/ProIconPack/Textures/Base_Icons/Ellipse/64x64/T_Ellipse_Outline2_64x64.T_Ellipse_Outline2_64x64 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UWB_Icon_Base_C__pf2787112053::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{167, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Texture2D 
		{168, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateBrush 
		{76, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{169, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Margin 
		{0, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateColor 
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushDrawType 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushTileType 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESlateBrushMirrorType 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Widget 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{123, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{174, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/UMG.WidgetTransform 
		{175, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.SlateFontInfo 
		{176, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{127, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{177, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/ProIconPack/UI/Enums/E_IconBaseTypes.E_IconBaseTypes 
		{178, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/ProIconPack/UI/Enums/E_Sizes.E_Sizes 
		{179, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/ProIconPack/UI/Enums/E_GlassMaskTypes.E_GlassMaskTypes 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UWB_Icon_Base_C__pf2787112053
{
	FRegisterHelper__UWB_Icon_Base_C__pf2787112053()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/ProIconPack/UI/WB_Icon_Base"), &UWB_Icon_Base_C__pf2787112053::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UWB_Icon_Base_C__pf2787112053 Instance;
};
FRegisterHelper__UWB_Icon_Base_C__pf2787112053 FRegisterHelper__UWB_Icon_Base_C__pf2787112053::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
