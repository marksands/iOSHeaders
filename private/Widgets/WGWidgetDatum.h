//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Widgets/WGDatum-Protocol.h>

@class NSExtension, NSString;

@interface WGWidgetDatum : NSObject <WGDatum>
{
    NSExtension *_representedExtension;
}

@property(readonly, nonatomic) NSExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *datumIdentifier;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

