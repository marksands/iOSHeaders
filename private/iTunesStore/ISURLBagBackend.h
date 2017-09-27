//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, SSDoubleLinkedList;

@interface ISURLBagBackend : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_bagValuesDictionary;
    SSDoubleLinkedList *_bagValuesList;
}

+ (_Bool)_bagValue:(id)arg1 equalsBagValue:(id)arg2;
@property(retain, nonatomic) SSDoubleLinkedList *bagValuesList; // @synthesize bagValuesList=_bagValuesList;
@property(retain, nonatomic) NSMutableDictionary *bagValuesDictionary; // @synthesize bagValuesDictionary=_bagValuesDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
- (id)_valueForKey:(id)arg1 forBagValuesNode:(id)arg2;
- (id)_bagValuesMapTableWithInitialValues:(id)arg1;
- (id)description;
- (void)removeBagValuesForBagWithKey:(id)arg1;
- (void)addBagValues:(id)arg1 forBagWithKey:(id)arg2;
- (id)valueForKey:(id)arg1 forBagWithKey:(id)arg2;
- (id)dictionaryRepresentationForBagWithKey:(id)arg1;
- (id)diagnostics;
- (id)deltaDictionaryRepresentationForBagWithKey:(id)arg1;
- (id)init;

@end

