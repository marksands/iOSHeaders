//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NUPixelFormat : NSObject
{
    int _CIFormat;
    long long _bytesPerPixel;
    NSString *_name;
    unsigned int _CVPixelFormat;
}

+ (id)XRSRGB10_A8;
+ (id)XRSRGB10;
+ (id)A16;
+ (id)I8;
+ (id)RGBAh;
+ (id)RGBAf;
+ (id)RG16;
+ (id)RGBA16;
+ (id)sRGBA8;
+ (id)RGBA8;
+ (id)BGRA8;
+ (id)ARGB8;
+ (id)pixelFormatForCVPixelFormat:(unsigned int)arg1;
+ (id)pixelFormatForCIFormat:(int)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int CVPixelFormat; // @synthesize CVPixelFormat=_CVPixelFormat;
@property(readonly, nonatomic) int CIFormat; // @synthesize CIFormat=_CIFormat;
@property(readonly, nonatomic) long long bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPixelFormat:(id)arg1;
- (unsigned long long)hash;
- (long long)alignedRowBytesForWidth:(long long)arg1;

@end

