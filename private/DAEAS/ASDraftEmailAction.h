//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DAAction.h"

@interface ASDraftEmailAction : DAAction
{
    _Bool _send;
}

@property(nonatomic) _Bool send; // @synthesize send=_send;
- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 send:(_Bool)arg3;

@end

