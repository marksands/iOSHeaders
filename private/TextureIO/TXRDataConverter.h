//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TXRDataConverter : NSObject
{
}

+ (id)newPixelFormatSetForCGImage:(struct CGImage *)arg1 displayGamut:(unsigned long long)arg2 options:(id)arg3;
+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 gammaDegamma:(_Bool)arg4 error:(id *)arg5;
+ (id)newImageFromSourceImage:(id)arg1 newPixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 multiplyAlpha:(_Bool)arg4 gammaDegamma:(_Bool)arg5 error:(id *)arg6;

@end

