//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "XCTActivity.h"

@class NSArray, NSDate, NSMutableArray, NSString, NSUUID;

@interface XCActivityRecord : NSObject <NSSecureCoding, XCTActivity>
{
    NSString *_title;
    NSString *_activityType;
    NSUUID *_uuid;
    NSDate *_start;
    NSDate *_finish;
    NSMutableArray *_attachments;
    _Bool _valid;
    _Bool _useLegacySerializationFormat;
    NSString *_aggregationIdentifier;
    double _subactivitiesDuration;
}

+ (_Bool)_shouldSaveAttachmentWithName:(id)arg1 lifetime:(long long)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly) double subactivitiesDuration; // @synthesize subactivitiesDuration=_subactivitiesDuration;
@property(copy) NSString *aggregationIdentifier; // @synthesize aggregationIdentifier=_aggregationIdentifier;
@property _Bool useLegacySerializationFormat; // @synthesize useLegacySerializationFormat=_useLegacySerializationFormat;
@property(copy) NSDate *start; // @synthesize start=_start;
@property(copy) NSDate *finish; // @synthesize finish=_finish;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy) NSString *title; // @synthesize title=_title;
- (void)subactivityCompletedWithDuration:(double)arg1;
- (void)_synchronized_ensureValid;
- (void)invalidate;
@property(readonly) double duration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSArray *attachments; // @synthesize attachments=_attachments;
- (void)addAttachment:(id)arg1;
- (void)_synchronized_addAttachment:(id)arg1;
- (void)removeAttachmentsWithName:(id)arg1;
- (id)attachmentForName:(id)arg1;
- (void)addLocalizableStringsData:(id)arg1;
- (void)addSynthesizedEvent:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (void)addScreenImageData:(id)arg1 forceKeepAlways:(_Bool)arg2;
- (void)addMemoryGraphData:(id)arg1;
- (void)addDiagnosticReportData:(id)arg1;
- (void)_synchronized_removeAttachmentsWithName:(id)arg1;
- (id)_synchronized_attachmentForName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_decodeLegacyAttachments:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)init;
- (void)dealloc;
- (void)attachDiagnosticsIncludingLocalizableStringsData:(_Bool)arg1;
- (void)attachAutomaticScreenshot;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

