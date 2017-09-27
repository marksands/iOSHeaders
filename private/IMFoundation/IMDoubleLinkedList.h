//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject
{
    IMDoubleLinkedListNode *_first;
    IMDoubleLinkedListNode *_last;
    unsigned long long _count;
}

@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(retain) IMDoubleLinkedListNode *last; // @synthesize last=_last;
@property(retain) IMDoubleLinkedListNode *first; // @synthesize first=_first;
- (_Bool)containsObject:(id)arg1;
- (id)allObjects;
- (void)removeAllObjects;
- (void)removeLinkedListNode:(id)arg1;
- (void)pushLinkedListNode:(id)arg1;
- (void)appendLinkedListNode:(id)arg1;
- (id)popObject;
- (void)pushObject:(id)arg1;
- (void)appendObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

