//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DKDGLFrameBufferTextureLookupInfo : NSObject
{
    unsigned int _attachment;
    unsigned int _textureName;
    long long _indexOnAttachment;
    NSString *_name;
    struct __CVBuffer *_cachedTexture;
    struct __CVBuffer *_pixelBuffer;
    struct CGSize _textureSize;
}

+ (id)textureLookupInfoWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize)arg4 name:(id)arg5;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) struct __CVBuffer *cachedTexture; // @synthesize cachedTexture=_cachedTexture;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;
@property(readonly, nonatomic) unsigned int textureName; // @synthesize textureName=_textureName;
@property(nonatomic) long long indexOnAttachment; // @synthesize indexOnAttachment=_indexOnAttachment;
@property(nonatomic) unsigned int attachment; // @synthesize attachment=_attachment;
- (void)dealloc;
- (id)initWithAttachment:(unsigned int)arg1 indexOnAttachment:(long long)arg2 textureName:(unsigned int)arg3 textureSize:(struct CGSize)arg4 name:(id)arg5;

@end

