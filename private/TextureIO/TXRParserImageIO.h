//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRParser-Protocol.h>

@class NSString, TXRImageInfo, TXRTextureInfo;

@interface TXRParserImageIO : NSObject <TXRParser>
{
    TXRTextureInfo *_textureInfo;
    TXRImageInfo *_imageInfo;
}

+ (struct CGImage *)newCGImageFromImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 error:(id *)arg3;
+ (_Bool)exportImage:(id)arg1 url:(id)arg2 uttype:(const struct __CFString *)arg3 colorSpace:(struct CGColorSpace *)arg4 orientation:(unsigned char)arg5 error:(id *)arg6;
+ (_Bool)exportTexture:(id)arg1 url:(id)arg2 error:(id *)arg3;
+ (id)decodeCGImageNonIndexed:(struct CGImage *)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (id)decodeCGImage:(struct CGImage *)arg1 desiredPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (int)determineColorSpaceClass:(struct CGImage *)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;
+ (_Bool)handlesData:(id)arg1;
@property(readonly, nonatomic) TXRTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
- (void).cxx_destruct;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (_Bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

