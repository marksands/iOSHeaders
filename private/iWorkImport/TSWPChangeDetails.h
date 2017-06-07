//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDChangeDetails-Protocol.h>

@class NSDate, NSString, TSKAnnotationAuthor, TSWPChange;

__attribute__((visibility("hidden")))
@interface TSWPChangeDetails : NSObject <TSDChangeDetails>
{
    TSWPChange *_change;
    NSDate *_dateForLastChangeStringUpdate;
    NSString *_changeTrackingContentString;
    NSString *_changeTrackingTitleString;
    NSString *_formattedString;
}

@property(retain, nonatomic) NSString *formattedString; // @synthesize formattedString=_formattedString;
@property(retain, nonatomic) NSString *changeTrackingTitleString; // @synthesize changeTrackingTitleString=_changeTrackingTitleString;
@property(retain, nonatomic) NSString *changeTrackingContentString; // @synthesize changeTrackingContentString=_changeTrackingContentString;
@property(retain, nonatomic) NSDate *dateForLastChangeStringUpdate; // @synthesize dateForLastChangeStringUpdate=_dateForLastChangeStringUpdate;
@property(retain, nonatomic) TSWPChange *change; // @synthesize change=_change;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *annotationUUID;
- (_Bool)isInDocument;
- (void)commentWillBeAddedToDocumentRoot;
@property(readonly, copy) NSString *description;
- (void)p_updateChangeStrings;
- (struct _NSRange)p_rangeInStorage;
@property(readonly, nonatomic) int annotationDisplayStringType;
@property(readonly, nonatomic) int annotationType;
@property(readonly, nonatomic) NSString *changeTrackingContentFormatString;
@property(readonly, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
- (_Bool)wantsAnnotationPopover;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEquivalentToObject:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

