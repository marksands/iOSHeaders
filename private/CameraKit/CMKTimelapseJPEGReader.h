//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CMKTimelapseJPEGReader : NSObject
{
}

+ (struct CGImage *)createCGImageFromData:(id)arg1 applyTransform:(_Bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(_Bool)arg4;
+ (struct __CVBuffer *)createPixelBufferFromData:(id)arg1 applyTransform:(_Bool)arg2 maxPixelSize:(long long)arg3 useBGRA:(_Bool)arg4;
+ (id)_decodeOptionsWithMaxPixelSize:(long long)arg1 applyTransform:(_Bool)arg2 useBGRA:(_Bool)arg3;
+ (id)newDataFromFilePath:(id)arg1;

@end

