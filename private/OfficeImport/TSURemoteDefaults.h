//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/TSURemotePropertyList.h>

__attribute__((visibility("hidden")))
@interface TSURemoteDefaults : TSURemotePropertyList
{
}

+ (id)sharedDefaults;
- (void)processPropertyList:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)registerDefaults;
- (id)initInternal;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;

@end

