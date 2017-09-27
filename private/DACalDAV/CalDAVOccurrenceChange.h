//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject
{
    _Bool _isMaster;
    ICSDate *_recurrenceID;
    NSMutableDictionary *_changes;
}

+ (id)changeWithItem:(id)arg1;
+ (id)changeWithOccurrenceID:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) ICSDate *recurrenceID; // @synthesize recurrenceID=_recurrenceID;
@property(nonatomic) _Bool isMaster; // @synthesize isMaster=_isMaster;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool proposedStartDateChanged;
@property(readonly, nonatomic) _Bool privateCommentChanged;
@property(readonly, nonatomic) _Bool participationChanged;
@property(readonly, nonatomic) _Bool recurrenceChanged;
@property(readonly, nonatomic) _Bool attachmentsChanged;
@property(readonly, nonatomic) _Bool statusChanged;
@property(readonly, nonatomic) _Bool descriptionChanged;
@property(readonly, nonatomic) _Bool attendeesChanged;
@property(readonly, nonatomic) _Bool summaryChanged;
@property(readonly, nonatomic) _Bool urlChanged;
@property(readonly, nonatomic) _Bool locationChanged;
@property(readonly, nonatomic) _Bool timeZoneChanged;
@property(readonly, nonatomic) _Bool endTimeChanged;
@property(readonly, nonatomic) _Bool startTimeChanged;
@property(readonly, nonatomic) _Bool dateTimeChanged;
- (_Bool)didParameterChange:(id)arg1 onProperty:(id)arg2;
- (_Bool)didPropertyChange:(id)arg1;
- (void)addChangedParameter:(id)arg1 ofProperty:(id)arg2;
- (void)addChangedProperty:(id)arg1;
- (id)initWithOccurrenceID:(id)arg1;
- (id)init;

@end

