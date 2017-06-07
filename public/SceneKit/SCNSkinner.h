//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSArray, SCNGeometry, SCNGeometrySource, SCNNode;

@interface SCNSkinner : NSObject <NSSecureCoding>
{
    struct __C3DSkinner *_skinner;
    SCNGeometry *_baseGeometry;
    _Bool _bonesAndIndicesCompression;
    SCNNode *_skeleton;
}

+ (_Bool)supportsSecureCoding;
+ (id)_skinnerWithBaseGeometry:(id)arg1 skinnableGeometry:(id)arg2 bones:(id)arg3 boneInverseBindTransforms:(id)arg4 bindMatrix:(struct SCNMatrix4)arg5;
+ (id)skinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneInverseBindTransforms:(id)arg3 boneWeights:(id)arg4 boneIndices:(id)arg5;
+ (struct __C3DSkinner *)_createSkinnerWithCompressedData:(id)arg1 bonesCount:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;
+ (struct __C3DSkinner *)_createSkinnerWithVertexCount:(long long)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 baseGeometry:(id)arg5;
+ (struct __C3DSkinner *)createSkinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4;
+ (id)skinnerWithSkinnerRef:(struct __C3DSkinner *)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (const void *)__CFObject;
- (id)joints;
- (void)setBones:(id)arg1;
@property(readonly, nonatomic) NSArray *bones;
- (void)setBoneInverseBindTransforms:(id)arg1;
@property(readonly, nonatomic) NSArray *boneInverseBindTransforms;
@property(readonly, nonatomic) SCNGeometrySource *boneIndices;
@property(readonly, nonatomic) SCNGeometrySource *boneWeights;
@property(nonatomic) struct SCNMatrix4 baseGeometryBindTransform;
- (void)_setBaseGeometry:(id)arg1;
@property(retain, nonatomic) SCNGeometry *baseGeometry;
- (void)set_bonesAndIndicesCompression:(_Bool)arg1;
- (_Bool)_bonesAndIndicesCompression;
- (void)setWantsCPUSkinning:(_Bool)arg1;
- (_Bool)wantsCPUSkinning;
@property(nonatomic) __weak SCNNode *skeleton;
- (void)_syncObjCModel;
- (void)_setSkeleton:(id)arg1;
- (struct __C3DSkinner *)skinnerRef;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSkinnerRef:(struct __C3DSkinner *)arg1;

@end
