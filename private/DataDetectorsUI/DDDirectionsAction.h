//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

__attribute__((visibility("hidden")))
@interface DDDirectionsAction : DDAction
{
}

+ (_Bool)actionAvailableForCachedEvent:(id)arg1;
+ (_Bool)actionAvailableForContact:(id)arg1;
- (_Bool)canBePerformedByOpeningURL;
- (void)performFromView:(id)arg1;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)localizedName;

@end

