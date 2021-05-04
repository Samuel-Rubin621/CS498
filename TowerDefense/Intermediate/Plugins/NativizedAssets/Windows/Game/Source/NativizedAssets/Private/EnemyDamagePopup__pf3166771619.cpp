#include "NativizedAssets.h"
#include "EnemyDamagePopup__pf3166771619.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
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
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
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
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
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
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
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
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "TowerDefense/DefaultEnemy.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "TowerDefense/EnemyAIController.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UEnemyDamagePopup_C__pf3166771619::UEnemyDamagePopup_C__pf3166771619(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__Enemy__pf = nullptr;
	bpv__AnimationLength__pf = 2.000000f;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UEnemyDamagePopup_C__pf3166771619::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UEnemyDamagePopup_C__pf3166771619::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("MoveAndFadeText_INST"), (EObjectFlags)0x00280008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UTextBlock>(__Local__0, TEXT("PopUpText"), (EObjectFlags)0x00280008);
	__Local__2->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[99B53F1541ECE0CF9C0F33BA5AA35D4B]\", \"D4EB3D924922667CAB04D8B1EF4E8576\", \"PopUpText\")")	);
	__Local__2->RenderTransform.Translation = FVector2D(0.000000, -150.000000);
	__Local__0->RootWidget = __Local__2;
	auto __Local__3 = NewObject<UMovieScene>(__Local__1, TEXT("MoveAndFadeText"), (EObjectFlags)0x00280008);
	auto& __Local__4 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__3), UMovieScene::__PPO__Possessables() )));
	__Local__4 = TArray<FMovieScenePossessable> ();
	__Local__4.AddUninitialized(1);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__4.GetData(), 1);
	auto& __Local__5 = __Local__4[0];
	auto& __Local__6 = (*(AccessPrivateProperty<FGuid >(&(__Local__5), FMovieScenePossessable::__PPO__Guid() )));
	__Local__6 = FGuid(0xE412F7FA, 0x40A6C4F5, 0x1D479483, 0x638FE9C2);
	auto& __Local__7 = (*(AccessPrivateProperty<FString >(&(__Local__5), FMovieScenePossessable::__PPO__Name() )));
	__Local__7 = FString(TEXT("PopUpText"));
	auto& __Local__8 = (*(AccessPrivateProperty<UClass* >(&(__Local__5), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__8 = UTextBlock::StaticClass();
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__3), UMovieScene::__PPO__ObjectBindings() )));
	__Local__9 = TArray<FMovieSceneBinding> ();
	__Local__9.AddUninitialized(1);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__9.GetData(), 1);
	auto& __Local__10 = __Local__9[0];
	auto& __Local__11 = (*(AccessPrivateProperty<FGuid >(&(__Local__10), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__11 = FGuid(0xE412F7FA, 0x40A6C4F5, 0x1D479483, 0x638FE9C2);
	auto& __Local__12 = (*(AccessPrivateProperty<FString >(&(__Local__10), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__12 = FString(TEXT("PopUpText"));
	auto& __Local__13 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__10), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__13 = TArray<UMovieSceneTrack*> ();
	__Local__13.Reserve(2);
	auto __Local__14 = NewObject<UMovieScene2DTransformTrack>(__Local__3, TEXT("MovieScene2DTransformTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__15 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__14), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__15.PropertyName = FName(TEXT("RenderTransform"));
	__Local__15.PropertyPath = FName(TEXT("RenderTransform"));
	__Local__15.bCanUseClassLookup = true;
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__14), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__16 = TArray<UMovieSceneSection*> ();
	__Local__16.Reserve(1);
	auto __Local__17 = NewObject<UMovieScene2DTransformSection>(__Local__14, TEXT("MovieScene2DTransformSection_0"), (EObjectFlags)0x00280008);
	auto __Local__18 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__17->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__19 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__17->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__18)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__19)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__20 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__17->Translation[0]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__20 = TArray<FFrameNumber> ();
	__Local__20.Reserve(2);
	__Local__20.Add(FFrameNumber{});
	__Local__20.Add(FFrameNumber{});
	__Local__20[1].Value = 120000;
	auto& __Local__21 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__17->Translation[0]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__21 = TArray<FMovieSceneFloatValue> ();
	__Local__21.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__21.GetData(), 2);
	auto& __Local__22 = __Local__21[0];
	auto& __Local__23 = __Local__21[1];
	auto& __Local__24 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__17->Translation[1]), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__24 = TArray<FFrameNumber> ();
	__Local__24.Reserve(2);
	__Local__24.Add(FFrameNumber{});
	__Local__24.Add(FFrameNumber{});
	__Local__24[1].Value = 120000;
	auto& __Local__25 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__17->Translation[1]), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__25 = TArray<FMovieSceneFloatValue> ();
	__Local__25.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__25.GetData(), 2);
	auto& __Local__26 = __Local__25[0];
	auto& __Local__27 = __Local__25[1];
	__Local__27.Value = -150.000000f;
	__Local__17->Easing.EaseIn = __Local__18;
	__Local__17->Easing.EaseOut = __Local__19;
	__Local__17->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(120000)));
	auto& __Local__28 = (*(AccessPrivateProperty<FGuid >((__Local__17), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__28 = FGuid(0x5453E593, 0x43F21532, 0xF13EA99F, 0xDEAD6999);
	__Local__16.Add(__Local__17);
	auto& __Local__29 = (*(AccessPrivateProperty<FGuid >((__Local__14), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__29 = FGuid(0xB3692148, 0x4106F2D1, 0x83EC70AB, 0x1A888CC5);
	auto& __Local__30 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__14), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__30.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__30.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__30.Entries.GetData(), 1);
	auto& __Local__31 = __Local__30.Entries[0];
	__Local__31.Section = __Local__17;
	static TWeakFieldPtr<FProperty> __Local__33{};
	const FProperty* __Local__32 = __Local__33.Get();
	if (nullptr == __Local__32)
	{
		__Local__32 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("LowerBound")));
		check(__Local__32);
		__Local__33 = __Local__32;
	}
	auto& __Local__34 = (*(__Local__32->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__31.Range), 0)));
	static TWeakFieldPtr<FProperty> __Local__36{};
	const FProperty* __Local__35 = __Local__36.Get();
	if (nullptr == __Local__35)
	{
		__Local__35 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Type")));
		check(__Local__35);
		__Local__36 = __Local__35;
	}
	auto& __Local__37 = (*(__Local__35->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__34), 0)));
	__Local__37 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__39{};
	const FProperty* __Local__38 = __Local__39.Get();
	if (nullptr == __Local__38)
	{
		__Local__38 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRange"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("UpperBound")));
		check(__Local__38);
		__Local__39 = __Local__38;
	}
	auto& __Local__40 = (*(__Local__38->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__31.Range), 0)));
	auto& __Local__41 = (*(__Local__35->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__40), 0)));
	__Local__41 = ERangeBoundTypes::Type::Inclusive;
	static TWeakFieldPtr<FProperty> __Local__43{};
	const FProperty* __Local__42 = __Local__43.Get();
	if (nullptr == __Local__42)
	{
		__Local__42 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameNumberRangeBound"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Value")));
		check(__Local__42);
		__Local__43 = __Local__42;
	}
	auto& __Local__44 = (*(__Local__42->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__40), 0)));
	__Local__44.Value = 120000;
	__Local__31.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__45 = (*(AccessPrivateProperty<FGuid >((__Local__14), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__45 = FGuid(0xB3692148, 0x4106F2D1, 0x83EC70AB, 0x1A888CC5);
	__Local__13.Add(__Local__14);
	auto __Local__46 = NewObject<UMovieSceneColorTrack>(__Local__3, TEXT("MovieSceneColorTrack_0"), (EObjectFlags)0x00280008);
	auto& __Local__47 = (*(AccessPrivateProperty<FMovieScenePropertyBinding >((__Local__46), UMovieScenePropertyTrack::__PPO__PropertyBinding() )));
	__Local__47.PropertyName = FName(TEXT("ColorAndOpacity"));
	__Local__47.PropertyPath = FName(TEXT("ColorAndOpacity"));
	__Local__47.bCanUseClassLookup = true;
	auto& __Local__48 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__46), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__48 = TArray<UMovieSceneSection*> ();
	__Local__48.Reserve(1);
	auto __Local__49 = NewObject<UMovieSceneColorSection>(__Local__46, TEXT("MovieSceneColorSection_0"), (EObjectFlags)0x00280008);
	auto __Local__50 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__49->GetDefaultSubobjectByName(TEXT("EaseInFunction")), ECastCheckedType::NullAllowed);
	auto __Local__51 = CastChecked<UMovieSceneBuiltInEasingFunction>(__Local__49->GetDefaultSubobjectByName(TEXT("EaseOutFunction")), ECastCheckedType::NullAllowed);
	if(__Local__50)
	{
		// --- Default subobject 'EaseInFunction' //
		// --- END default subobject 'EaseInFunction' //
	}
	if(__Local__51)
	{
		// --- Default subobject 'EaseOutFunction' //
		// --- END default subobject 'EaseOutFunction' //
	}
	auto& __Local__52 = (*(AccessPrivateProperty<FMovieSceneFloatChannel >((__Local__49), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	auto& __Local__53 = (*(AccessPrivateProperty<TArray<FFrameNumber> >(&(__Local__52), FMovieSceneFloatChannel::__PPO__Times() )));
	__Local__53 = TArray<FFrameNumber> ();
	__Local__53.Reserve(2);
	__Local__53.Add(FFrameNumber{});
	__Local__53.Add(FFrameNumber{});
	__Local__53[1].Value = 120000;
	auto& __Local__54 = (*(AccessPrivateProperty<TArray<FMovieSceneFloatValue> >(&(__Local__52), FMovieSceneFloatChannel::__PPO__Values() )));
	__Local__54 = TArray<FMovieSceneFloatValue> ();
	__Local__54.AddUninitialized(2);
	FMovieSceneFloatValue::StaticStruct()->InitializeStruct(__Local__54.GetData(), 2);
	auto& __Local__55 = __Local__54[0];
	__Local__55.Value = 1.000000f;
	auto& __Local__56 = __Local__54[1];
	__Local__49->Easing.EaseIn = __Local__50;
	__Local__49->Easing.EaseOut = __Local__51;
	__Local__49->SectionRange = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Inclusive(120000)));
	auto& __Local__57 = (*(AccessPrivateProperty<FGuid >((__Local__49), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__57 = FGuid(0xFBB48755, 0x4DCBE418, 0x506425B6, 0xA3A49F61);
	__Local__48.Add(__Local__49);
	auto& __Local__58 = (*(AccessPrivateProperty<FGuid >((__Local__46), UMovieSceneTrack::__PPO__EvaluationFieldGuid() )));
	__Local__58 = FGuid(0xA858589D, 0x43B65436, 0xBC42BAA6, 0x9466AC93);
	auto& __Local__59 = (*(AccessPrivateProperty<FMovieSceneTrackEvaluationField >((__Local__46), UMovieSceneTrack::__PPO__EvaluationField() )));
	__Local__59.Entries = TArray<FMovieSceneTrackEvaluationFieldEntry> ();
	__Local__59.Entries.AddUninitialized(1);
	FMovieSceneTrackEvaluationFieldEntry::StaticStruct()->InitializeStruct(__Local__59.Entries.GetData(), 1);
	auto& __Local__60 = __Local__59.Entries[0];
	__Local__60.Section = __Local__49;
	auto& __Local__61 = (*(__Local__32->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__60.Range), 0)));
	auto& __Local__62 = (*(__Local__35->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__61), 0)));
	__Local__62 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__63 = (*(__Local__38->ContainerPtrToValuePtr<FFrameNumberRangeBound >(&(__Local__60.Range), 0)));
	auto& __Local__64 = (*(__Local__35->ContainerPtrToValuePtr<TEnumAsByte<ERangeBoundTypes::Type> >(&(__Local__63), 0)));
	__Local__64 = ERangeBoundTypes::Type::Inclusive;
	auto& __Local__65 = (*(__Local__42->ContainerPtrToValuePtr<FFrameNumber >(&(__Local__63), 0)));
	__Local__65.Value = 120000;
	__Local__60.ForcedTime.Value = (-2147483647 - 1);
	auto& __Local__66 = (*(AccessPrivateProperty<FGuid >((__Local__46), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__66 = FGuid(0xA858589D, 0x43B65436, 0xBC42BAA6, 0x9466AC93);
	__Local__13.Add(__Local__46);
	auto& __Local__67 = (*(AccessPrivateProperty<FMovieSceneFrameRange >((__Local__3), UMovieScene::__PPO__PlaybackRange() )));
	__Local__67 = FMovieSceneFrameRange(TRange<FFrameNumber>(TRangeBound<FFrameNumber>::Inclusive(0), TRangeBound<FFrameNumber>::Exclusive(120001)));
	auto& __Local__68 = (*(AccessPrivateProperty<FFrameRate >((__Local__3), UMovieScene::__PPO__DisplayRate() )));
	static TWeakFieldPtr<FProperty> __Local__70{};
	const FProperty* __Local__69 = __Local__70.Get();
	if (nullptr == __Local__69)
	{
		__Local__69 = (CastChecked<UScriptStruct>(FStructUtils::FindStructureInPackageChecked(TEXT("FrameRate"), TEXT("/Script/CoreUObject"))))->FindPropertyByName(FName(TEXT("Numerator")));
		check(__Local__69);
		__Local__70 = __Local__69;
	}
	auto& __Local__71 = (*(__Local__69->ContainerPtrToValuePtr<int32 >(&(__Local__68), 0)));
	__Local__71 = 20;
	auto& __Local__72 = (*(AccessPrivateProperty<FGuid >((__Local__3), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__72 = FGuid(0x6CBC1EC8, 0x4EF86B44, 0x02D4398F, 0x60F2E4E0);
	__Local__1->MovieScene = __Local__3;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(1);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 1);
	auto& __Local__73 = __Local__1->AnimationBindings[0];
	__Local__73.WidgetName = FName(TEXT("PopUpText"));
	__Local__73.AnimationGuid = FGuid(0xE412F7FA, 0x40A6C4F5, 0x1D479483, 0x638FE9C2);
	auto& __Local__74 = (*(AccessPrivateProperty<FString >((__Local__1), UWidgetAnimation::__PPO__DisplayLabel() )));
	__Local__74 = FString(TEXT("MoveAndFadeText"));
	__Local__1->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
	auto& __Local__75 = (*(AccessPrivateProperty<FGuid >((__Local__1), UMovieSceneSignedObject::__PPO__Signature() )));
	__Local__75 = FGuid(0xB371231C, 0x4330B56C, 0x4737C7AA, 0xA6FBDDA8);
	UMovieSceneCompiledDataManager::GetPrecompiledData()->Compile(__Local__1);
}
PRAGMA_ENABLE_OPTIMIZATION
void UEnemyDamagePopup_C__pf3166771619::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__76;
	SlotNames.Append(__Local__76);
}
void UEnemyDamagePopup_C__pf3166771619::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__77;
	__Local__77.Reserve(1);
	__Local__77.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UEnemyDamagePopup_C__pf3166771619::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__78;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UEnemyDamagePopup_C__pf3166771619::StaticClass())->MiscConvertedSubobjects[0]), __Local__77, __Local__78);
}
void UEnemyDamagePopup_C__pf3166771619::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UEnemyDamagePopup_C__pf3166771619::bpf__ExecuteUbergraph_EnemyDamagePopup__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_ProjectWorldLocationToScreen_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	if(::IsValid(bpv__Enemy__pf))
	{
		bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__Enemy__pf->AActor::K2_GetActorLocation();
	}
	if(::IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
	{
		bpfv__CallFunc_ProjectWorldLocationToScreen_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::ProjectWorldLocationToScreen(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf, false);
	}
	UUserWidget::SetPositionInViewport(b0l__CallFunc_ProjectWorldLocationToScreen_ScreenLocation__pf, true);
	return; // KCST_GotoReturn
}
void UEnemyDamagePopup_C__pf3166771619::bpf__ExecuteUbergraph_EnemyDamagePopup__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	return; // KCST_GotoReturn
}
void UEnemyDamagePopup_C__pf3166771619::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_EnemyDamagePopup__pf_0(2);
}
void UEnemyDamagePopup_C__pf3166771619::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_EnemyDamagePopup__pf_1(1);
}
PRAGMA_DISABLE_OPTIMIZATION
void UEnemyDamagePopup_C__pf3166771619::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UEnemyDamagePopup_C__pf3166771619::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{123, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{124, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{125, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/SlateCore.Geometry 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{126, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/TowerDefense.DefaultEnemy 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{127, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{23, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{128, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UEnemyDamagePopup_C__pf3166771619
{
	FRegisterHelper__UEnemyDamagePopup_C__pf3166771619()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UserInterface/EnemyDamagePopup"), &UEnemyDamagePopup_C__pf3166771619::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UEnemyDamagePopup_C__pf3166771619 Instance;
};
FRegisterHelper__UEnemyDamagePopup_C__pf3166771619 FRegisterHelper__UEnemyDamagePopup_C__pf3166771619::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
