//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVImageLoader.h"

@class NSString;

@interface _TVMonogramImageLoader : NSObject <TVImageLoader>
{
}

+ (id)sharedInstance;
- (id)_imageLoadError;
- (_Bool)_isValidAppleAccountImageURL:(id)arg1;
- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)imageKeyForObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

