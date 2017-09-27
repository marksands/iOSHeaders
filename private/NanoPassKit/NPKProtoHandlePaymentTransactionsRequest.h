//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface NPKProtoHandlePaymentTransactionsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_passAppletStates;
    NSMutableArray *_transactionPassIDs;
    NSMutableArray *_transactionsBytes;
}

+ (Class)passAppletStatesType;
+ (Class)transactionPassIDsType;
+ (Class)transactionsBytesType;
@property(retain, nonatomic) NSMutableArray *passAppletStates; // @synthesize passAppletStates=_passAppletStates;
@property(retain, nonatomic) NSMutableArray *transactionPassIDs; // @synthesize transactionPassIDs=_transactionPassIDs;
@property(retain, nonatomic) NSMutableArray *transactionsBytes; // @synthesize transactionsBytes=_transactionsBytes;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)passAppletStatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)passAppletStatesCount;
- (void)addPassAppletStates:(id)arg1;
- (void)clearPassAppletStates;
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionPassIDsCount;
- (void)addTransactionPassIDs:(id)arg1;
- (void)clearTransactionPassIDs;
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionsBytesCount;
- (void)addTransactionsBytes:(id)arg1;
- (void)clearTransactionsBytes;

@end

