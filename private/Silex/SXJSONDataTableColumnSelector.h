//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Silex/SXJSONDataTableSelector.h>

#import "SXDataTableColumnSelector.h"

@class NSString;

@interface SXJSONDataTableColumnSelector : SXJSONDataTableSelector <SXDataTableColumnSelector>
{
}

- (unsigned long long)weightForSelectorKey:(id)arg1;
- (unsigned long long)oddWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)evenWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long columnIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *descriptor;
@property(readonly, nonatomic) unsigned long long even; // @dynamic even;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long odd; // @dynamic odd;
@property(readonly, nonatomic) unsigned long long rowIndex;
@property(readonly) Class superclass;

@end

