//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSStorageApp.h>

@interface PSUsagePseudoApp : PSStorageApp
{
}

- (long long)totalSize;
- (long long)dataSize;
- (long long)purgeableSize;
- (long long)dynamicSize;
- (long long)staticSize;
- (id)bundleIdentifier;
- (id)appIdentifier;
- (id)name;
- (id)initWithUsageBundleApp:(id)arg1;

@end

