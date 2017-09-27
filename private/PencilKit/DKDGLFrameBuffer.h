//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface DKDGLFrameBuffer : NSObject
{
    NSArray *_textureConfigs;
    NSDictionary *_namesToTextureDict;
    NSMutableArray *_currentTextureLookupInfoByAttachment;
    NSMutableArray *_desiredTextureLookupInfoByAttachment;
    NSArray *_textureConfigsByAttachment;
    NSArray *_textureLookupInfosByAttachment;
    long long _currentBindingOption;
    unsigned int _currentDrawBuffers[1];
    int _currentDrawBufferCount;
    unsigned int _currentReadBuffer;
    unsigned int _framebuffer;
    _Bool _isUsingNonDefaultAttachments;
    struct __CVOpenGLESTextureCache *_textureCache;
    _Bool _isBound;
    _Bool _shouldDeleteTexturesOnTeardown;
    NSString *_name;
    struct CGSize _size;
}

+ (void)setCurrentGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2;
+ (void)setCurrentGLFramebuffer:(int)arg1;
+ (int)currentGLFramebufferWithBindingOption:(long long)arg1;
+ (int)currentGLFramebuffer;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool shouldDeleteTexturesOnTeardown; // @synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown;
@property(readonly, nonatomic) _Bool isBound; // @synthesize isBound=_isBound;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (unsigned int)currentGLTexture;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (void)teardown;
- (struct CGSize)sizeOfGLTextureNamed:(id)arg1;
- (unsigned int)GLTextureNamed:(id)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1;
- (struct __CVBuffer *)pixelBufferAtIndex:(unsigned long long)arg1 attachment:(unsigned int)arg2;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned int)arg2;
- (void)setCurrentTexturesToNext;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (void)setCurrentTextureNamed:(id)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureIndex:(unsigned long long)arg1;
- (void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned int)arg2;
- (long long)currentTextureIndexAtAttachment:(unsigned int)arg1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 withBindingOption:(long long)arg2;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)bindFramebufferWithBindingOption:(long long)arg1;
- (void)p_setFramebufferTextureAtAttachmentIndex:(long long)arg1 bindingOption:(long long)arg2;
- (void)p_setDrawBuffersAndReadBuffer;
- (_Bool)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned int *)arg1 count:(long long)arg2;
- (void)bindFramebuffer;
- (void)setupFramebufferIfNecessary;
- (struct __CVBuffer *)createTextureCacheTextureWithSize:(struct CGSize)arg1 pixelBufferOut:(struct __CVBuffer **)arg2;
- (int)glFramebuffer;
- (id)description;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 textureCount:(unsigned long long)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureConfigs:(id)arg2 textureCache:(struct __CVOpenGLESTextureCache *)arg3;
- (id)initWithSize:(struct CGSize)arg1 textureConfigs:(id)arg2;

@end

