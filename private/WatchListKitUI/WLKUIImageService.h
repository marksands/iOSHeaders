//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WLKUIImageService : NSObject
{
}

+ (id)_cachePath;
+ (id)_cachedImageForKey:(id)arg1;
+ (void)_cacheImage:(id)arg1 forKey:(id)arg2;
+ (id)_MD5StringForString:(id)arg1;
+ (id)_keyForInstallable:(id)arg1 size:(struct CGSize)arg2;
+ (id)_imageURLForInstallable:(id)arg1 size:(struct CGSize)arg2;
+ (double)iconCornerRadiusForSize:(struct CGSize)arg1;
+ (void)fetchIconForInstallable:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;

@end

