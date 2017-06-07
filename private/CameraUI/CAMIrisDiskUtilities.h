//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMIrisDiskUtilities : NSObject
{
}

+ (_Bool)hasPendingWork;
+ (id)_substituteForDotInBundleIdentifier;
+ (id)_delimiterForFilenames;
+ (_Bool)isValidVideoDestinationPath:(id)arg1;
+ (_Bool)parseVideoDestinationPath:(id)arg1 forStillImagePersistenceUUID:(id *)arg2 videoPersistenceUUID:(id *)arg3 captureDevice:(long long *)arg4 captureOrientation:(long long *)arg5 captureTime:(double *)arg6 persistenceOptions:(long long *)arg7 temporaryPersistenceOptions:(long long *)arg8 bundleIdentifier:(id *)arg9 filterName:(id *)arg10;
+ (id)videoDestinationPathForStillImageRequest:(id)arg1 captureTime:(double)arg2 isEV0ForHDR:(_Bool)arg3 bundleIdentifier:(id)arg4;
+ (id)videoPathExtension;
+ (id)irisVideoDirectoryPathCreateIfNeeded:(_Bool)arg1;
+ (id)irisVideoDirectoryPath;

@end

