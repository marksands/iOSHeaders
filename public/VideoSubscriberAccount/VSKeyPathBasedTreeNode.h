//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSTreeNode.h>

@class NSString;

@interface VSKeyPathBasedTreeNode : VSTreeNode
{
    NSString *_keyPath;
}

@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)initWithRepresentedObject:(id)arg1 keyPath:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1;
- (id)init;

@end

