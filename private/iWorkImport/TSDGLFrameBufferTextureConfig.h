//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSDGLFrameBufferTextureConfig : NSObject
{
    _Bool _isTextureNameGenerated;
    int _GLInternalFormat;
    unsigned int _GLFormat;
    unsigned int _GLType;
    unsigned int _attachment;
    NSString *_name;
    NSArray *_textureParameters;
    struct CGSize _textureSize;
}

+ (id)textureConfigWithSize:(struct CGSize)arg1 name:(id)arg2;
+ (id)textureConfigWithSize:(struct CGSize)arg1 textureParameters:(id)arg2 name:(id)arg3;
+ (id)textureConfigWithSize:(struct CGSize)arg1 attachment:(unsigned int)arg2 textureParameters:(id)arg3 name:(id)arg4;
+ (id)textureConfigWithSize:(struct CGSize)arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 textureParameters:(id)arg6 name:(id)arg7;
@property(readonly, nonatomic) NSArray *textureParameters; // @synthesize textureParameters=_textureParameters;
@property(readonly, nonatomic) unsigned int attachment; // @synthesize attachment=_attachment;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int GLType; // @synthesize GLType=_GLType;
@property(readonly, nonatomic) unsigned int GLFormat; // @synthesize GLFormat=_GLFormat;
@property(readonly, nonatomic) int GLInternalFormat; // @synthesize GLInternalFormat=_GLInternalFormat;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_textureSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 internalFormat:(int)arg2 format:(unsigned int)arg3 type:(unsigned int)arg4 attachment:(unsigned int)arg5 textureParameters:(id)arg6 name:(id)arg7;

@end

