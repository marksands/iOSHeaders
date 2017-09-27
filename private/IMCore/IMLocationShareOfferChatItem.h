//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import "IMMessageChatItem.h"

@class IMHandle, NSDate, NSString;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem>
{
    IMHandle *_sender;
    _Bool _actionableEclipsed;
}

- (void).cxx_destruct;
- (void)_setActionableEclipsed:(_Bool)arg1;
- (_Bool)_isActionableEclipsed;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
@property(readonly, nonatomic) long long offerState;
@property(readonly, nonatomic) IMHandle *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) _Bool failed;
@property(readonly, nonatomic) _Bool isFromMe;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

