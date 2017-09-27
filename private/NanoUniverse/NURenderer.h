//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, EAGLSharegroup, NSBundle;

@interface NURenderer : NSObject
{
    EAGLContext *_context;
    EAGLSharegroup *_shareGroup;
    NSBundle *_bundle;
    struct NURendererResources _resources;
    unsigned int _initalizedProgams:1;
    unsigned int _initalizedHemi:1;
    unsigned int _initalizedTextures:1;
    unsigned int _initalized:1;
}

+ (void)prime;
+ (void)_deallocInstance;
+ (id)sharedInstance;
@property(readonly, nonatomic) EAGLSharegroup *shareGroup; // @synthesize shareGroup=_shareGroup;
- (void).cxx_destruct;
- (void)_prime;
- (void)_purge;
- (void)purge;
- (void)_asyncDeallocInstance;
- (_Bool)_initTextures;
- (void)_loadTexture:(unsigned long long)arg1;
- (void)_requireTexture:(unsigned long long)arg1 sync:(_Bool)arg2;
- (_Bool)_initPrograms;
- (id)snapshot:(id)arg1 size:(struct CGSize)arg2;
- (void)_renderWithScene:(id)arg1 viewport:(struct NUViewport)arg2 prime:(_Bool)arg3;
- (void)renderWithScene:(id)arg1 viewport:(struct NUViewport)arg2;
- (unsigned int)createVertexArray;
- (_Bool)_initHemi;
- (void)dealloc;
- (id)init;

@end

