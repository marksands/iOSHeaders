//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCHUnretainedParent.h"

@class TSCH3DGLFBO;

__attribute__((visibility("hidden")))
@interface TSCH3DGLFramebufferMultisample : NSObject <TSCHUnretainedParent>
{
    id <TSCH3DGLResolveFramebuffer> mParent;
    struct FramebufferAttributes mAttributes;
    TSCH3DGLFBO *mMultisampleFBO;
    _Bool mResolved;
    _Bool mMultisampleDisabled;
}

+ (id)multisampleWithParent:(id)arg1 framebufferAttributes:(const struct FramebufferAttributes *)arg2;
@property(readonly, nonatomic) struct FramebufferAttributes attributes; // @synthesize attributes=mAttributes;
@property(readonly, nonatomic) _Bool resolved; // @synthesize resolved=mResolved;
- (id).cxx_construct;
- (void)resolveInSession:(id)arg1;
- (_Bool)validForSession:(id)arg1;
- (_Bool)activateInsideSession:(id)arg1;
- (_Bool)bindInSession:(id)arg1;
- (struct SessionLoadResourceResult)p_loadFramebufferInSession:(id)arg1;
- (_Bool)p_createMultisampleFBOOnDemandInsideSession:(id)arg1 returningResolveFramebufferActivated:(_Bool *)arg2;
- (struct FramebufferAttributes)p_clampedAttributes;
- (void)disableSamplingInSession:(id)arg1;
@property(readonly, nonatomic) _Bool usingMultisample;
- (_Bool)p_supportsMultisample;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1 framebufferAttributes:(const struct FramebufferAttributes *)arg2;
- (id)multisampleFBOResource;

@end

