//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBFeatureManager : NSObject
{
    _Bool _offlineReadingListAvailable;
    _Bool _favoritesFolderSelectionShouldSync;
    long long _accessLevel;
}

+ (id)sharedFeatureManager;
@property(readonly, nonatomic) _Bool favoritesFolderSelectionShouldSync; // @synthesize favoritesFolderSelectionShouldSync=_favoritesFolderSelectionShouldSync;
@property(readonly, nonatomic, getter=isOfflineReadingListAvailable) _Bool offlineReadingListAvailable; // @synthesize offlineReadingListAvailable=_offlineReadingListAvailable;
@property(readonly, nonatomic) long long accessLevel; // @synthesize accessLevel=_accessLevel;
- (void)_updateToAccessLevel:(long long)arg1;
- (id)init;

@end

