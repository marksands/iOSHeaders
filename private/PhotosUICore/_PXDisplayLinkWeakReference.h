//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _PXDisplayLinkWeakReference : NSObject
{
    id _object;
    SEL _selector;
}

@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithObject:(id)arg1 selector:(SEL)arg2;

@end

