//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventOrganizerDetailItem : EKEventDetailItem
{
    UITableViewCell *_cell;
    id <EKIdentityProtocol> _organizerOverride;
}

@property(retain) id <EKIdentityProtocol> organizerOverride; // @synthesize organizerOverride=_organizerOverride;
- (void).cxx_destruct;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end

