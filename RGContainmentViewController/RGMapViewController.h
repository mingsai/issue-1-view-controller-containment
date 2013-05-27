//
//  RGMapViewController.h
//  RGContainmentViewController
//
//  Created by Ricki Gregersen on 5/23/13.
//  Copyright (c) 2013 Ricki Gregersen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RGMapStateModel.h"
#import "RGMapControllerProtocol.h"

@interface RGMapViewController : UIViewController<RGMapControllerProtocol>

- (void) updateWithMapModel:(RGMapStateModel*) model;
- (NSString*) identifier;

@end
