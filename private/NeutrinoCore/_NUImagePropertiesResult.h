//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUImagePropertiesResult-Protocol.h>

@class NSString;
@protocol NUImageProperties, NURenderStatistics;

@interface _NUImagePropertiesResult : _NURenderResult <NUImagePropertiesResult>
{
    id <NUImageProperties> _properties;
}

@property(retain) id <NUImageProperties> properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

