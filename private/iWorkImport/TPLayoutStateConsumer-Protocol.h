//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol TPLayoutStateConsumer <NSObject>
- (_Bool)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setBodyLength:(unsigned long long)arg2;
- (_Bool)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setSectionHints:(NSArray *)arg2;
- (void)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setLastPageCount:(unsigned long long)arg2;
- (void)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setDocumentPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setSectionPageIndex:(unsigned long long)arg2;
- (void)archivedLayoutState:(id <TPArchivedLayoutStateProtocol>)arg1 setSectionIndex:(unsigned long long)arg2;
@end

