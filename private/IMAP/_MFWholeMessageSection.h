//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMAP/MFMessageDataSection-Protocol.h>

@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection>
{
    MFDataHolder *_dataHolder;
}

@property(retain, nonatomic) MFDataHolder *dataHolder; // @synthesize dataHolder=_dataHolder;
- (void)dealloc;
- (id)partName;
- (_Bool)isComplete;
- (_Bool)isPartial;

@end

