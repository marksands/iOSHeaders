//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFCard-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@interface SFCard : NSObject <SFCard, NSSecureCoding>
{
    CDStruct_f633cd92 _has;
    int _type;
    int _source;
    NSString *_title;
    NSArray *_cardSections;
    NSData *_intentMessageData;
    NSString *_intentMessageName;
    NSData *_intentResponseMessageData;
    NSString *_intentResponseMessageName;
    NSArray *_dismissalCommands;
    NSString *_cardId;
    NSString *_contextReferenceIdentifier;
    NSURL *_urlValue;
    NSData *_entityIdentifier;
    NSString *_resultIdentifier;
    NSData *_originalCardData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic, getter=_originalCardData, setter=_setOriginalCardData:) NSData *originalCardData; // @synthesize originalCardData=_originalCardData;
@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(copy, nonatomic) NSData *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSURL *urlValue; // @synthesize urlValue=_urlValue;
@property(copy, nonatomic) NSString *contextReferenceIdentifier; // @synthesize contextReferenceIdentifier=_contextReferenceIdentifier;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSArray *dismissalCommands; // @synthesize dismissalCommands=_dismissalCommands;
@property(copy, nonatomic) NSString *intentResponseMessageName; // @synthesize intentResponseMessageName=_intentResponseMessageName;
@property(copy, nonatomic) NSData *intentResponseMessageData; // @synthesize intentResponseMessageData=_intentResponseMessageData;
@property(copy, nonatomic) NSString *intentMessageName; // @synthesize intentMessageName=_intentMessageName;
@property(copy, nonatomic) NSData *intentMessageData; // @synthesize intentMessageData=_intentMessageData;
@property(copy) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasSource;
- (_Bool)hasType;
- (void)loadCardSectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadCardSectionsWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

