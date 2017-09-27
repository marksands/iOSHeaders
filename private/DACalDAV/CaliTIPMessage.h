//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDAVScheduleChangesProperty, ICSCalendar, ICSDocument, ICSEvent, NSArray, NSData, NSString;

@interface CaliTIPMessage : NSObject
{
    NSData *_data;
    CalDAVScheduleChangesProperty *_scheduleChanges;
    NSString *_filename;
    ICSDocument *_document;
    ICSEvent *_event;
}

@property(retain, nonatomic) ICSEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) ICSDocument *document; // @synthesize document=_document;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) CalDAVScheduleChangesProperty *scheduleChanges; // @synthesize scheduleChanges=_scheduleChanges;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)description;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSArray *occurrences;
@property(readonly, nonatomic) NSArray *allOccurrences;
@property(readonly, nonatomic) ICSEvent *masterEvent;
@property(readonly, nonatomic) ICSCalendar *calendar;
- (id)initWithData:(id)arg1 filename:(id)arg2 scheduleChanges:(id)arg3;
- (id)initWithData:(id)arg1 filename:(id)arg2;

@end

