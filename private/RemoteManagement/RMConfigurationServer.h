//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCListener, RMConfigurationServerDelegate;

@interface RMConfigurationServer : NSObject
{
    NSXPCListener *_listener;
    RMConfigurationServerDelegate *_delegate;
}

@property(retain) RMConfigurationServerDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1;

@end

