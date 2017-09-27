//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBAbstractCommand, _SFPBCardSection, _SFPBNamedProtobufMessage, _SFPBURL;

@protocol _SFPBCard <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *entityProtobufMessages;
@property(readonly, nonatomic) _Bool hasFlexibleSectionOrder;
@property(nonatomic) _Bool flexibleSectionOrder;
@property(readonly, nonatomic) _Bool hasFbr;
@property(copy, nonatomic) NSString *fbr;
@property(readonly, nonatomic) _Bool hasQueryId;
@property(nonatomic) unsigned long long queryId;
@property(readonly, nonatomic) _Bool hasResultIdentifier;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly, nonatomic) _Bool hasEntityIdentifier;
@property(copy, nonatomic) NSData *entityIdentifier;
@property(readonly, nonatomic) _Bool hasSource;
@property(nonatomic) int source;
@property(readonly, nonatomic) _Bool hasUrlValue;
@property(retain, nonatomic) _SFPBURL *urlValue;
@property(readonly, nonatomic) _Bool hasContextReferenceIdentifier;
@property(copy, nonatomic) NSString *contextReferenceIdentifier;
@property(readonly, nonatomic) _Bool hasCardId;
@property(copy, nonatomic) NSString *cardId;
@property(copy, nonatomic) NSArray *dismissalCommands;
@property(readonly, nonatomic) _Bool hasIntentResponseMessageName;
@property(copy, nonatomic) NSString *intentResponseMessageName;
@property(readonly, nonatomic) _Bool hasIntentResponseMessageData;
@property(copy, nonatomic) NSData *intentResponseMessageData;
@property(readonly, nonatomic) _Bool hasIntentMessageName;
@property(copy, nonatomic) NSString *intentMessageName;
@property(readonly, nonatomic) _Bool hasIntentMessageData;
@property(copy, nonatomic) NSData *intentMessageData;
@property(copy) NSArray *cardSections;
@property(readonly, nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) _Bool hasTitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBNamedProtobufMessage *)entityProtobufMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityProtobufMessagesCount;
- (void)addEntityProtobufMessages:(_SFPBNamedProtobufMessage *)arg1;
- (void)clearEntityProtobufMessages;
- (_SFPBAbstractCommand *)dismissalCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dismissalCommandsCount;
- (void)addDismissalCommands:(_SFPBAbstractCommand *)arg1;
- (void)clearDismissalCommands;
- (_SFPBCardSection *)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)addCardSections:(_SFPBCardSection *)arg1;
- (void)clearCardSections;
@end

