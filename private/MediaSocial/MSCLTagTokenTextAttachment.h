//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaSocial/MSCLTokenTextAttachment.h>

@class MSCLTag, MSCLTagTokenView;

@interface MSCLTagTokenTextAttachment : MSCLTokenTextAttachment
{
}

- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)representedText;
- (id)initWithTag:(id)arg1;

// Remaining properties
@property(retain, nonatomic) MSCLTag *representedObject; // @dynamic representedObject;
@property(retain, nonatomic) MSCLTagTokenView *tokenView; // @dynamic tokenView;

@end

