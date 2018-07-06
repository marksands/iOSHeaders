//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXSettings.h"

@interface PUSearchSettings : PXSettings
{
    _Bool _showMomentsSection;
    _Bool _showPeopleSection;
    _Bool _showGroupsSection;
    _Bool _showPlacesSection;
    _Bool _showCategoriesSection;
    _Bool _autoExpandSingleSectionedResults;
    _Bool _showKeyboardForZeroKeywords;
    _Bool _preferFavoritesInTop8;
    unsigned long long _maxThumbnailsPerRow;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool preferFavoritesInTop8; // @synthesize preferFavoritesInTop8=_preferFavoritesInTop8;
@property(nonatomic) unsigned long long maxThumbnailsPerRow; // @synthesize maxThumbnailsPerRow=_maxThumbnailsPerRow;
@property(nonatomic) _Bool showKeyboardForZeroKeywords; // @synthesize showKeyboardForZeroKeywords=_showKeyboardForZeroKeywords;
@property(nonatomic) _Bool autoExpandSingleSectionedResults; // @synthesize autoExpandSingleSectionedResults=_autoExpandSingleSectionedResults;
@property(nonatomic) _Bool showCategoriesSection; // @synthesize showCategoriesSection=_showCategoriesSection;
@property(nonatomic) _Bool showPlacesSection; // @synthesize showPlacesSection=_showPlacesSection;
@property(nonatomic) _Bool showGroupsSection; // @synthesize showGroupsSection=_showGroupsSection;
@property(nonatomic) _Bool showPeopleSection; // @synthesize showPeopleSection=_showPeopleSection;
@property(nonatomic) _Bool showMomentsSection; // @synthesize showMomentsSection=_showMomentsSection;
- (void)setDefaultValues;
- (id)parentSettings;

@end

