//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUMediaItemCellConfiguration.h"

@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration
{
    CDStruct_3e55db63 _position;
}

+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (id)copyDefaultContext;
@property(nonatomic) CDStruct_3e55db63 position; // @synthesize position=_position;
- (_Bool)showContentRating;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (void)reloadImages;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (void)drawBackgroundWithModifiers:(unsigned long long)arg1;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)init;

@end

