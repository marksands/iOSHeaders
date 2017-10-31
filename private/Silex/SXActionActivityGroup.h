//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXActionActivityGroup.h"

@class NSMutableArray, NSString;

@interface SXActionActivityGroup : NSObject <SXActionActivityGroup>
{
    NSString *_title;
    NSMutableArray *_activities;
}

@property(retain, nonatomic) NSMutableArray *activities; // @synthesize activities=_activities;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)addActivity:(id)arg1;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
